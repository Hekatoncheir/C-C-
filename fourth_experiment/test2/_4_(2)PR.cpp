//
// Created by _lian on 2017/3/21.
//

#include <iostream>
#include "_4_(2).h"
using namespace std;

Rational::Rational(long numerator, long denominator) {
    while (this->denominator==0)
    {
        std::cout << "Please enter the denominator bigger than zero ";
        cin >> this->denominator;
    }
    this->numerator = numerator;
    this->denominator = denominator;
    this->simple();
}

void Rational::SetRational(long numerator, long denominator) {
    while (this->denominator==0)
    {
        std::cout << "Please enter the denominator bigger than zero ";
        cin >> this->denominator;
    }
    this->numerator = numerator;
    this->denominator = denominator;
    this->simple();
}

Rational::~Rational() {
    ;
}

void Rational::simple() {
    int i;
    i = this->numerator>0 ? this->numerator:-this->numerator;
    for (;i>1;i--)
        if (this->numerator%i==0 && this->denominator%i==0)
            this->numerator/=i, this->denominator/=i;
}

Rational operator+(const Rational &rational1, const Rational &rational2) {
    return Rational (rational1.numerator*rational2.denominator+rational2.numerator*rational1.denominator, rational1.denominator*rational2.denominator);
}

Rational operator-(const Rational &rational1, const Rational &rational2) {
    return Rational (rational1.numerator*rational2.denominator-rational2.numerator*rational1.denominator, rational1.denominator*rational2.denominator);
}

Rational operator*(const Rational &rational1, const Rational &rational2) {
    return Rational (rational1.numerator*rational2.numerator, rational1.denominator*rational2.denominator);
}

Rational operator/(const Rational &rational1, const Rational &rational2) {
    return Rational (rational1.numerator*rational2.denominator, rational1.denominator*rational2.numerator);
}

bool operator>(const Rational &rational1, const Rational &rational2) {
    Rational rational = rational1 - rational2;
    if (rational.numerator<0 || rational.denominator<0)
        return false;
    else
        return true;
}

bool operator<=(const Rational &rational1, const Rational &rational2) {
    Rational rational = rational1 - rational2;
    if (rational.numerator<=0)
        return true;
    else
        return false;
}

bool operator==(const Rational &rational1, const Rational &rational2) {
    Rational rational = rational1 - rational2;
    if (rational.numerator==0)
        return true;
    else
        return false;
}

std::ostream& operator<<(std::ostream &os, const Rational &rational) {
    if (rational.numerator!=0)
        os << rational.numerator << "/" << rational.denominator;
    else if (rational.numerator==0)
        os << rational.numerator;
    return os;
}