//
// Created by _lian on 2017/3/20.
//

#include "_3_(1).h"
#include <iostream>
using namespace std;

void Myclass::print() {
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}

void Myclass::copy(Myclass &my) {
    this->x = my.x;
    this->y = my.y;
}

void Myclass::copy2(Myclass &my) {
    x = my.x;
    y = my.y;
}