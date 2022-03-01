#pragma once;
#include "includes.h"

class teacher : public Person {
public:
	void setData()
	{
		Person::setData();
		cout << "¬ведите рабочие часы: ";
		cin >> work_time;
	}
	void getData()
	{
		Person::getData();
		cout << "—умма рабочего времени: " << this->work_time << endl;
	}
private:
	unsigned int work_time;
};