#include <math.h>
#include "triangle.h"

Triangle::TriangleDoesNotExistException::TriangleDoesNotExistException(std::string error)
{
	origin = error;
}

Triangle::Triangle(int tA, int tB, int tC)
{
	setTriangle(tA, tB, tC);
}

bool Triangle::isTriangle(int a, int b, int c)
{
	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		return true;
	}
	else
	{
		throw Triangle::TriangleDoesNotExistException("Треугольник не существует, ошибка ввода. \n");
		return false;
	}
}

void Triangle::setTriangle(int tA, int tB, int tC)
{
	if (isTriangle(tA, tB, tC))
	{
		a = tA;
		b = tB;
		c = tC;
	}
}

double Triangle::area(Triangle& triangle)
{
	double p = (triangle.a + triangle.b + triangle.c) / 2;
	return sqrt(p * (p - triangle.a) * (p - triangle.b) * (p - triangle.c));
}