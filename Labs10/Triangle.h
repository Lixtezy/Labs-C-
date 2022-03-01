#pragma once
#include "dot.h"

class Triangle
{
private:
	dot h1;
	dot h2;
	dot h3;

public:
	Triangle(const dot& head1, const dot& head2, const  dot& head3);
	~Triangle();

	double getSideLength(dot& head1, const dot& head2);
	double getPerimetor();
	double getSquare();
};