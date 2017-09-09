//
// Created by _lian on 2017/3/13.
//

#include <iostream>
#include "_2_(4).h"
using namespace std;

Rational::Rational(int nn, int mm) {
    n = nn;
    while (mm == 0)
    {
        cout << "Please enter the denominator not equal zero" << endl;
        cin >> mm;
    }
    m = mm;
}

void Rational::simple() {
    int i;
    i = n>0 ? n:-n;
    for (;i>1;i--)
        if (n%i==0 && m%i==0)
            n/=i, m/=i;
}

void Rational::print() {
    simple();
    cout << n << "/" << m << endl;
}

Rational Rational::R_add(Rational &A) {
    int km = this->m * A.m;
    int kn = this->n * A.m + A.n * this->m;
    Rational R = Rational (kn, km);
    return R;
}

Rational Rational::R_sub(Rational &A) {
    int km = this->m * A.m;
    int kn = this->n * A.m - A.n * this->m;
    Rational R = Rational (kn, km);
    return R;
}

Rational Rational::R_div(Rational &A) {
    int km = this->m * A.n;
    int kn = this->n * A.m;
    Rational R = Rational (kn, km);
    return R;
}

Rational Rational::R_mul(Rational &A) {
    int km = this->m * A.m;
    int kn = this->n * A.n;
    Rational R = Rational (kn, km);
    return R;
}