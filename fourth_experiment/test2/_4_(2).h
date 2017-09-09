//
// Created by _lian on 2017/3/21.
//

#ifndef TEST2_4_2_H
#define TEST2_4_2_H

#include <iostream>
class Rational{
private:
    long numerator; //分子
    long denominator; //分母
public:
    Rational (long numerator=1, long denominator=1);
    ~Rational();
    friend Rational operator+(const Rational& rational1, const Rational& rational2);
    friend Rational operator-(const Rational& rational1, const Rational& rational2);
    friend Rational operator*(const Rational& rational1, const Rational& rational2);
    friend Rational operator/(const Rational& rational1, const Rational& rational2);
    friend bool operator>(const Rational& rational1, const Rational& rational2);
    friend bool operator<=(const Rational& rational1, const Rational& rational2);
    friend bool operator==(const Rational& rational1, const Rational& rational2);
    friend std::ostream& operator<<(std::ostream& os, const Rational& rational);
    void simple ();
    void SetRational(long numerator, long denominator);
};
#endif //TEST2_4_2_H
