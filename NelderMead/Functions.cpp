#pragma once

#include <iostream>

#include "Functions.h"

using namespace std;

double f_1_1(InputPoint iP)
{
	return (iP.GetX() * sin(4 * iP.GetX())) + (1.1 * iP.GetY() * sin (2 * iP.GetY()));
}
