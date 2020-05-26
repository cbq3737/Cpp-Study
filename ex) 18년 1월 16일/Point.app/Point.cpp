#include "Point.h"
#include <iostream>
#include "Point.h"
Point::Point(int a = 0, int b = 0)
{
	x = a;
	y = b;
}
void Point::Print()const
{
	std::cout << x << ',' << y << std::endl;
}