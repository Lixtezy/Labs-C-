#include <iostream>
#include "triangle.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << fixed;
	cout.precision(2);
	double a, b, c, s;
	cout << "Введите стороны треугольника:" << endl;
	cin >> a >> b >> c;
	try
	{
		Triangle myTriangle = Triangle(a, b, c);
		s = myTriangle.area(myTriangle);
		cout << "Площадь треугольника: " << s << endl;
	}
	catch (Triangle::TriangleDoesNotExistException ex)
	{
		cout << "Ошибка: " << ex.origin;
	}
}