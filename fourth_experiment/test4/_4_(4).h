//
// Created by _lian on 2017/3/21.
//

#ifndef TEST4_4_4_H
#define TEST4_4_4_H

#include <iostream>
class Time{
private:
    int hour;
    int minute;
    int second;
public:
    Time(int hour=0, int minute=0, int second=0);
    Time(const Time& time);
    ~Time();
    void Reset(int hour=0, int minute=0, int second=0);
    Time operator+(const Time& time2);
    Time operator+(int second);
    friend Time operator+(int second, const Time& time);
    Time operator-(int second);
    friend Time operator-(int second, const Time& time);
    friend std::ostream& operator<<(std::ostream& os, const Time& time);
    Time& operator++();
    Time operator++(int);
    Time& operator--();
    Time operator--(int);
};
#endif //TEST4_4_4_H
