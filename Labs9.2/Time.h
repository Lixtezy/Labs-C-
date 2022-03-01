#pragma once
using namespace std;

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
    void setTime(int, int, int);
    Time sum(const Time&, const Time&);
    void showTime() const;

private:
    int hour;
    int min;
    int sec;
};