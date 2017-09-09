#include <iostream>
#include "_4_(2).h"
using namespace std;
int main() {
    Rational a = Rational (2,4);
    Rational b = Rational (3,6);
    Rational c;
    c = a-b;
    cout << c;
    return 0;
}