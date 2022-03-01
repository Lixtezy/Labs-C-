#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Time t0;
	t0.showTime();
	int hour, min, sec;

	try
	{
		cout << "Введите первое время: ";
		cin >> hour >> min >> sec;

		const Time t1(hour, min, sec);
		t1.showTime();

		cout << "Введите второе время: ";
		cin >> hour >> min >> sec;
		const Time t2(hour, min, sec);
		t2.showTime();

		t0 = t0.sum(t1, t2);

		cout << "Сумма времени: ";
		t0.showTime();
	}
	catch (Time::TimeInputException ex)
	{
		cout << "Ошибка: " << ex.origin;
	}
}