#include <iostream>
#include <string>
#include "InputPoint.h"

using namespace std;

double f(InputPoint);

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
					cout << f(iP) << ",";
				}
				cout << endl;
			}
		} else if (tool == "Exhaustive") {
			auto min = InputPoint(xMin, yMin);
			for (double x = xMin; x <= xMax; x += xStep) {
				for (double y = yMin; y <= yMax; y += yStep) {
					auto candidate = InputPoint(x, y);
					if (f(candidate) < f(min)) {
						min = candidate;
					}
				}
			}
			cout << "Minimum found: f(" << min.GetX() << ", " << min.GetY() << ") = " << f(min) << endl; 
		} else {
			cerr << "Unknown tool!\n";
		}
	}

	return 0;
}

double f(InputPoint iP)
{
	return (iP.GetX() * sin(4 * iP.GetX())) + (1.1 * iP.GetY() * sin (2 * iP.GetY()));
}
