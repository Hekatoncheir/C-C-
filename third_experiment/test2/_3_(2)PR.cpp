//
// Created by _lian on 2017/3/20.
//

#include <iostream>
#include "_3_(2).h"

Plural::Plural(double x, double y) {
    this->x = x;
    this->y = y;
}

Plural operator+(const Plural &pl, const Plural &pl2) {
    return Plural (pl.x+pl2.x, pl.y+pl2.y);
}

Plural operator-(const Plural &pl, const Plural &pl2) {
    return Plural (pl.x-pl2.x, pl.y-pl2.y);
}

Plural operator*(const Plural &pl, const Plural &pl2) {
    return Plural (pl.x*pl2.x-pl.y*pl2.y, pl.y*pl2.x+pl.x*pl2.y);
}

Plural operator/(const Plural &pl, const Plural &pl2) {
    return Plural ((pl.x*pl2.x+pl.y*pl2.y)/(pl2.x*pl2.x+pl2.y*pl2.y), (pl.y*pl2.x-pl.x*pl2.y)/(pl2.x*pl2.x+pl2.y*pl2.y));
}

std::ostream & operator<< (std::ostream & os, const Plural &pl) {
    if (pl.y < 0)
        os << pl.x << pl.y << "i" << std::endl;
    else
        os << pl.x << "+" << pl.y << "i" << std::endl;
    return os;
}