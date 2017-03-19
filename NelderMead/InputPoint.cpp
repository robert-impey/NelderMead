#include "InputPoint.h"


InputPoint::InputPoint(void)
{
}

InputPoint::InputPoint(double iX, double iY)
{
	x = iX;
	y = iY;
}

InputPoint::~InputPoint(void)
{
}

double InputPoint::GetX(void)
{
	return x;
}

double InputPoint::GetY(void)
{
	return y;
}
