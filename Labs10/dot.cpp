#include "dot.h"
#include <math.h>
dot::dot()
{
	x = 0; y = 0;
}
dot::dot(double x, double y)
{
	this->x = x;
	this->y = y;
}
double dot::distanceTo(const dot& point)
{
	double r1 = pow((this->x - point.x), 2);
	double r2 = pow((this->y - point.y), 2);
	return sqrt(r1 + r2);
}