#include <iostream>
#include "_2_(4).h"
using namespace std;
int main() {
    Rational a = Rational (4, 8);
    Rational A = Rational (2, 6);
    Rational b;
    a.print();
    A.print();
    b = a.R_add(A);
    b.print();
    b = a.R_sub(A);
    b.print();
    b = a.R_mul(A);
    b.print();
    b = a.R_div(A);
    b.print();
    return 0;
}