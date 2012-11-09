#pragma once
class InputPoint
{
public:
	InputPoint(void);
	InputPoint(double, double);
	~InputPoint(void);

	double GetX(void);
	double GetY(void);
private:
	double x;
	double y;
};

