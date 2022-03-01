#include <iostream>
#include "Time.h"

Time::Time()
{
    hour = min = sec = 0;
}

Time::Time(int h, int m, int s)
{
    setTime(h, m, s);
}

void Time::setTime(int h, int m, int s)
{
    if ((h < 0) || (m < 0) || (s < 0))
    {
        throw Time::TimeInputException("¬ведены отрицательные значени€. \n");
    }
    else if (!isdigit(h) || !isdigit(m) || !isdigit(s))
    {
        throw Time::TimeInputException("¬ведены не цифры. \n");
    }
    else
    {
        if (s >= 60)
        {
            m += s / 60;
            s = s % 60;
        }
        if (m >= 60)
        {
            h += m / 60;
            m = m % 60;
        }
        hour = h;
        min = m;
        sec = s;
    }
}

Time Time::sum(const Time& t1, const Time& t2)
{
    Time sumTime;
    sumTime.setTime(t1.hour + t2.hour, t1.min + t2.min, t1.sec + t2.sec);
    return sumTime;
}

void Time::showTime() const
{
    if (hour < 10)
    {
        cout << "0" << hour;
    }
    else
    {
        cout << hour;
    }
    if (min < 10)
    {
        cout << ":0" << min;
    }
    else
    {
        cout << ":" << min;
    }
    if (sec < 10)
    {
        cout << ":0" << sec << endl;
    }
    else
    {
        cout << ":" << sec << endl;
    }
}

Time::TimeInputException::TimeInputException(std::string error)
{
    origin = error;
}