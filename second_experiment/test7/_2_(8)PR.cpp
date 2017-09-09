//
// Created by _lian on 2017/3/15.
//

#include "_2(8).h"
#include <iostream>
#include <cmath>
using namespace std;

//point::point(double x, double y, double z) {
  //  this->x = x;
    //this->y = y;
    //this->z = z;
//}

void yuan::setX(double x) {
    this->x = x;
}

void yuan::setY(double y) {
    this->y = y;
}


yuan::yuan(double r, double x, double y) {
    this->r = r;
    this->x = x;
    this->y = y;
}

void yuan::setr(double r) {
    this->r = r;
}

double yuan::getr() {
    return this->r;
}

double yuan::juli(const yuan &b) {
    double num;
    num = (this->x-b.x)*(this->x-b.x)+(this->y-b.y)*(this->y-b.y);
    return sqrt(num);
}