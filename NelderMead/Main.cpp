#include <iostream>
#include <string>

#include "InputPoint.h"
#include "Functions.h"

using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1) {
		cout << "Nelder-Mead Method\n";
	} else {
		string tool = argv[1];

		const double xMin = 0;
		const double xMax = 10;
		const double yMin = 0;
		const double yMax = 10;

		const double xStep = 0.01;
		const double yStep = 0.01;

		if (tool == "Print") {
			string tool = argv[1];

			for (double x = xMin; x <= xMax; x += xStep) {
				for (double y = yMin; y <= yMax; y += yStep) {
					auto iP = InputPoint(x, y);
					cout << f_1_1(iP) << ",";
				}
				cout << endl;
			}
		} else if (tool == "Exhaustive") {
			auto min = InputPoint(xMin, yMin);
			for (double x = xMin; x <= xMax; x += xStep) {
				for (double y = yMin; y <= yMax; y += yStep) {
					auto candidate = InputPoint(x, y);
					if (f_1_1(candidate) < f_1_1(min)) {
						min = candidate;
					}
				}
			}
			cout << "Minimum found: f_1_1(" << min.GetX() << ", " << min.GetY() << ") = " << f_1_1(min) << endl; 
		} else {
			cerr << "Unknown tool!\n";
		}
	}

	return 0;
}
