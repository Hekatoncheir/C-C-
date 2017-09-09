//
// Created by _lian on 2017/3/13.
//

#include <iostream>
#include "_2_(1).h"
using namespace std;
Time::Time(int h, int m, int s) {
    while (h<0 || h>=24)
    {
        cout << "Please enter the hour's number more than 0 less than 23" << endl;
        cin >> h;
    }
    hou = h;
    while (m<0 || m>=60)
    {
        cout << "Please enter the minuter's number more than 1 less than 59" << endl;
        cin >> m;
    }
    min = m;
    while (s<0 || s>=60)
    {
        cout << "Please enter the second's number more than 1 less than 59" << endl;
        cin >> s;
    }
    sec = s;
}

void Time::sethour(int h) {
    while (h<0 || h>=24)
    {
        cout << "Please enter the number more than 0 less than 23" << endl;
        cin >> h;
    }
    hou = h;
}

void  Time::setminute(int m) {
    while (m<0 || m>=60)
    {
        cout << "Please enter the number more than 1 less than 59" << endl;
        cin >> m;
    }
    min = m;
}

void  Time::setsecond(int s) {
    while (s<0 || s>=60)
    {
        cout << "Please enter the number more than 1 less than 59" << endl;
        cin >> s;
    }
    sec = s;
}

void Time::show() {
    cout << hou << ":" << min << ":" << sec << endl;
}

void Time::setTime(int h, int m, int s) {
    while (h<0 || h>=24)
    {
        cout << "Please enter the hour's number more than 0 less than 23" << endl;
        cin >> h;
    }
    hou = h;
    while (m<0 || m>=60)
    {
        cout << "Please enter the minuter's number more than 1 less than 59" << endl;
        cin >> m;
    }
    min = m;
    while (s<0 || s>=60)
    {
        cout << "Please enter the second's number more than 1 less than 59" << endl;
        cin >> s;
    }
    sec = s;
}

void Time::tick() {
    sec++;
    if (sec == 60)
    {
        sec = 0;
        min++;
        if (min == 60)
        {
            min = 0;
            hou++;
            if (hou == 24)
                hou=0;
        }
    }
    show();
}

Time::~Time() {
    ;
}