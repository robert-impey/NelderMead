#include <iostream>
using namespace std;

double f(double, double);

int main()
{
	cout << "Nelder-Mead Method\n";

	const double xMin = 0;
	const double xMax = 10;
	const double yMin = 0;
	const double yMax = 10;
	
	const double xStep = 0.1;
	const double yStep = 0.1;

	for (double x = xMin; x <= xMax; x += xStep) {
		for (double y = yMin; y <= yMax; y += yStep) {
			cout << f(x, y) << ",";
		}
		cout << "\n";
	}

	return 0;
}

double f(double x, double y)
{
	return (x * sin(4 * x)) + (1.1 * y * sin (2 * y));
}
