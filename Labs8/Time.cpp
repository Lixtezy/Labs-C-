#include <iostream>
#include "Time.h"

using namespace std;


Time::Time() : hours(0), minutes(0), seconds(0) {}
Time::Time(int h, int m, int s)
{
	Time::hours = h;
	Time::minutes = m;
	Time::seconds = s;
	if (s / 60 >= 1)
	{
		int temp = (s / 60);
		Time::seconds = s % 60;
		Time::minutes += temp;
	}
	if (Time::minutes / 60 >= 1)
	{
		int temp = (Time::minutes / 60);
		Time::minutes = Time::minutes % 60;
		Time::hours += temp;
	}
}

void Time::TimeDisplay() const
{
	cout << "Время: " << this->hours << ":" << this->minutes << ":" << this->seconds << endl << endl;
}

Time Time::AddTime2(const Time& t) const
{
	Time tRes;
	tRes.hours = this->hours + t.hours;
	tRes.minutes = this->minutes + t.minutes;
	tRes.seconds = this->seconds + t.seconds;
	if (tRes.seconds >= 60)
	{
		tRes.seconds -= 60;
		++tRes.minutes;
	}
	if (tRes.minutes >= 60)
	{
		tRes.minutes -= 60;
		++tRes.hours;
	}
	return tRes;
}

int Time::get_hours()
{
	return Time::hours;
}
int Time::get_minutes()
{
	return Time::minutes;
}
int Time::get_seconds()
{
	return Time::seconds;
}