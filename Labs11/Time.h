#pragma once

class Time
{
public:
    class TimeInputException {
    public:
        std::string origin;
        TimeInputException(std::string error);
    };

    Time();
    Time(int, int, int);
    Time(double);
    void setTime(int, int, int);
    Time sum(const Time&, const Time&);
    void showTime() const;

    Time operator+(const Time&)const;
    Time operator-(const Time&)const;
    Time operator+(double) const;
    bool operator>(const Time&) const;
    bool operator<(const Time&) const;

    operator double() const {
        return static_cast<double>(hour * koef + min * 60 + sec) / koef;
    }
private:
    int hour;
    int min;
    int sec;
    int koef;
};
