//
// Created by _lian on 2017/3/21.
//

#include <iostream>
#include "_4_(4).h"
using std::cout;
using std::cin;
using std::endl;
Time::Time(int hour, int minute, int second) {
    if (hour<0)
        hour = -hour;
    if (minute<0)
        minute = -minute;
    if (second<0)
        second = -second;
    int h,m,s;
    s = second%60;
    m = minute%60+s/60;
    h = hour%60+m/60;
    this->hour = h%24;
    this->minute = m%60;
    this->second = s%60;
}

Time::Time(const Time &time) {
    this->hour = time.hour;
    this->minute = time.minute;
    this->second = time.second;
}

Time::~Time() {
    ;
}

void Time::Reset(int hour, int minute, int second) {
    while (hour<0 && hour>=24) {
        cout << "Please enter the hour bigger than 0 and less than 24" << endl;
        cin >> hour;
    }
    while (minute<0 && minute>=60) {
        cout << "Please enter the hour bigger than 0 and less than 60" << endl;
        cin >> minute;
    }
    while (second<0 && second>=24) {
        cout << "Please enter the hour bigger than 0 and less than 60" << endl;
        cin >> second;
    }
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

Time Time::operator+(const Time &time2) {
    int h, m, s;
    s = this->second+time2.second;
    m = this->minute+time2.minute+s/60;
    h = this->hour+time2.hour+m/60;
    return Time(h%24, m%60, s%60);
}

Time Time::operator+(int second) {
    int h,m,s;
    s = this->second+second;
    m = this->minute+s/60;
    h = this->hour+m/60;
    return Time(h%24,m%60,s%60);
}

Time operator+(int second, const Time &time) {
    int h,m,s;
    s = time.second+second;
    m = time.minute+s/60;
    h = time.hour+m/60;
    return Time(h%24,m%60,s%60);
}

Time Time::operator-(int second) {
    int h,m,s;
    s = this->hour*360+this->minute*60+this->second-second;
    m = s/60;
    h = m/60;
    return Time(h%24, m%60, s%60);
}

Time operator-(int second, const Time &time) {
    int h,m,s;
    s = time.hour*360+time.minute*60+time.second-second;
    m = s/60;
    h = m/60;
    return Time(h%24, m%60, s%60);
}

Time& Time::operator++() {
    int h,m,s;
    s = ++this->second;
    m = this->minute+s/60;
    h = this->hour+m/60;
    this->second = s%60;
    this->minute = m%60;
    this->hour = h%24;
    return *this;
}

Time Time::operator++(int) {
    int h,m,s;
    Time temp = *this;
    s = this->second+1;
    m = this->minute+s/60;
    h = this->hour+m/60;
    this->second = s%60;
    this->minute = m%60;
    this->hour = h%24;
    return temp;
}

Time& Time::operator--() {
    int h,m,s;
    s = this->hour*360+this->minute*60+this->second-1;
    m = s/60;
    h = m/60;
    this->hour = h%24;
    this->minute = m%60;
    this->second = s%60;
    return *this;
}

Time Time::operator--(int) {
    int h,m,s;
    Time temp = *this;
    s = this->hour*360+this->minute*60+this->second-1;
    m = s/60;
    h = m/60;
    this->hour = h%24;
    this->minute = m%60;
    this->second = s%60;
    return temp;
}

std::ostream& operator<<(std::ostream &os, const Time &time) {
    os << time.hour << ":" << time.minute << ":" << time.second << endl;
    return os;
}