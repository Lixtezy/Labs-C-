#pragma once
using namespace std;

class Person
{
public:
	virtual void setData()
	{
		cout << "Имя: " << "\n> ";
		cin >> name;
		cout << "Фамилия: " << "\n> ";
		cin >> surname;
		cout << "Отчество: " << "\n> ";
		cin >> fname;
	}
	virtual void getData()
	{
		cout << ">>: " << name << " " << surname << " " << fname << endl;
	}

private:
	std::string name;
	std::string surname;
	std::string fname;
};