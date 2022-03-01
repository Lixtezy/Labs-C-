#pragma once
class dot
{
private:
	double x;
	double y;
public:
	dot();
	dot(double x, double y);
	double distanceTo(const dot& point);
};