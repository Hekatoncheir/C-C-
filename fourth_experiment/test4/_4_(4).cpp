#include <iostream>
#include "_4_(4).h"
using namespace std;
int main() {
    Time a,b,c;
    a.Reset(4,28,56);
    b.Reset(16,54,27);
    c = a+b;
    cout << c;
    c = a+157;
    cout << c;
    c = 274+b;
    cout << c;
    c = a-147;
    cout << c;
    c = b-24;
    cout << c;
    c = a++;
    cout << "c: " << c << "a: " << a;
    c = ++b;
    cout << "c: " << c << "b: " << b;
    c = a--;
    cout << "c: " << c << "a: " << a;
    c = --b;
    cout << "c: " << c << "b: " << b;
    return 0;
}