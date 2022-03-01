#pragma once
#include <iostream>

class Triangle
{
public:
	class TriangleDoesNotExistException {
	public:
		std::string origin;
		TriangleDoesNotExistException(std::string error);
	};

	Triangle(int, int, int);
	bool isTriangle(int, int, int);
	void setTriangle(int, int, int);
	double area(Triangle&);

private:
	double a;
	double b;
	double c;
};