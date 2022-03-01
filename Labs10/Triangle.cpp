#include "Triangle.h"
#include <math.h>


Triangle::~Triangle()
{
}

Triangle::Triangle(const dot& head1, const dot& head2, const dot& head3)
{
	this->h1 = head1;
	this->h2 = head2;
	this->h3 = head3;
}

double Triangle::getSideLength(dot& head1, const dot& head2)
{
	return head1.distanceTo(head2);
}

double Triangle::getPerimetor()
{
	return h1.distanceTo(h2) + h2.distanceTo(h3) + h3.distanceTo(h1);
}

double Triangle::getSquare()
{
	double p = getPerimetor();
	double s1 = getSideLength(h1, h2);
	double s2 = getSideLength(h2, h3);
	double s3 = getSideLength(h3, h1);
	return sqrt(p / 2 * (p / 2 - s1) * (p / 2 - s2) * (p / 2 - s3));
}