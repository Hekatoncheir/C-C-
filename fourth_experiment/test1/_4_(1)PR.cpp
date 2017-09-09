//
// Created by _lian on 2017/3/21.
//

#include <iostream>
#include "_4_(1).h"
#include <cmath>
std::ostream& operator<<(std::ostream &os, const Point &p2) {
    os << "[" << p2.x << "," << p2.y << "]";
    return os;
}

double Point::operator-(const Point &p1) {
    return sqrt(pow(this->x-p1.x,2)+pow(this->y-p1.y,2));
}

//double operator-(const Point &p1, const Point &p2) {
//    return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
//}