#pragma once

using namespace std;

class Time
{
public:
	Time();
	Time(int, int, int);
	void TimeDisplay() const;
	Time AddTime2(const Time&) const;
	int get_hours();
	int get_minutes();
	int get_seconds();
private:
	int hours;
	int minutes;
	int seconds;
};