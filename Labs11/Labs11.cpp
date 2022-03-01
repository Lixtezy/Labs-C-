#include "includes.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Time t0;
	int hour, min, sec;
	double number;

	try
	{
		cout << "Начальное время: ";
		cin >> hour >> min >> sec;
		const Time t1(hour, min, sec);
		t1.showTime();
		cout << "Конечное время: ";
		cin >> hour >> min >> sec;
		const Time t2(hour, min, sec);
		t2.showTime();

		t0 = t0.sum(t1, t2);

		cout << "Сумма: " << "\n";
		t0.showTime();

		Time tDif = t1 - t2;
		cout << "Разница с перегрузкой: ";
		tDif.showTime();

		Time tSum = t1 + t2;
		cout << "Сумма с перегрузкой: ";
		tSum.showTime();

		Time tReal0 = t1 + 6.5;
		cout << "Сумма времени с действительным числом (часы): ";
		tReal0.showTime();

		Time tReal1 = 4.7 + t2;
		cout << "Сумма действительного числа (часов) со временем: ";
		tReal1.showTime();

		cout << "Double to int: ";
		cin >> number;
		Time tReal2 = number;
		cout << number << " часов: ";
		tReal2.showTime();

		cout << endl;

		if (t1 > t2) {
			cout << "Начальное время больше конечного." << endl;
		}
		else if (t1 < t2) {
			cout << "Начальное время меньше конечного" << endl;
		}
	}
	catch (Time::TimeInputException ex)
	{
		cout << "Ошибка: " << ex.origin;
	}
}