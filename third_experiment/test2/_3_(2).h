//
// Created by _lian on 2017/3/20.
//

#ifndef TEST2_3_2_H
#define TEST2_3_2_H

#include <iostream>
class Plural {
private:
    double x,y;
public:
    Plural (double x=0, double y=0);
    friend Plural operator+(const Plural &pl, const Plural &pl2) ;
    friend Plural operator-(const Plural &pl, const Plural &pl2) ;
    friend Plural operator*(const Plural &pl, const Plural &pl2) ;
    friend Plural operator/(const Plural &pl, const Plural &pl2) ;
    friend std::ostream & operator<<(std::ostream & os, const Plural &pl);
};
#endif //TEST2_3_2_H
