#include "includes.h"
#include <Windows.h>

int main()
{
	//setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Person* Student = new student;
	cout << "Студент:" << "\n";
	Student->setData();
	Student->getData();

	Person* Teacher = new teacher;
	cout << "Преподаватель:" << "\n";
	Teacher->setData();
	Teacher->getData();

	return 0;
}