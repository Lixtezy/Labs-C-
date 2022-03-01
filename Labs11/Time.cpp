#include "includes.h"

Time::Time()
{
    hour = min = sec = 0;
    koef = 3600;
}

Time::Time(int h, int m, int s)
{
    koef = 3600;
    setTime(h, m, s);
}

Time::Time(double d) : koef(3600)
{
    hour = min = 0;
    sec = d * koef;
    setTime(hour, min, sec);
}

void Time::setTime(int h, int m, int s)
{
    if ((h < 0) || (m < 0) || (s < 0))
    {
        throw Time::TimeInputException("Недопустимый ввод. \n");
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

Time Time::operator+(const Time& t2) const
{
    int h = hour + t2.hour;
    int m = min + t2.min;
    int s = sec + t2.sec;
    return Time(h, m, s);
}

Time Time::operator-(const Time& t2) const
{
    int h = abs(hour - t2.hour);
    int m = abs(min - t2.min);
    int s = abs(sec - t2.sec);
    return Time(h, m, s);
}

Time Time::operator+(double d) const
{
    Time td = Time(d);
    int h = hour + td.hour;
    int m = min + td.min;
    int s = sec + td.sec;
    return Time(h, m, s);
}

bool Time::operator>(const Time& t) const
{
    long t1 = hour * koef + min * 60 + sec;
    long t2 = t.hour * koef + t.min * 60 + t.sec;
    return (t1 > t2);
}

bool Time::operator<(const Time& t) const
{
    long t1 = hour * koef + min * 60 + sec;
    long t2 = t.hour * koef + t.min * 60 + t.sec;
    return (t1 < t2);
}

Time::TimeInputException::TimeInputException(std::string error)
{
    origin = error;
}