//
// Created by _lian on 2017/3/20.
//

#ifndef TEST3_3_3_H
#define TEST3_3_3_H

#include <iostream>
class Carlo{
private:
    double weight;
    double price;
    static double all_weight;
    static double all_price;
public:
    Carlo (double weight, double price);
    ~Carlo();
    friend std::ostream& operator<<(std::ostream & os, const Carlo & carlo);
};

#endif //TEST3_3_3_H
