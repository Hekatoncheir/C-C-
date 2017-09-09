#include <iostream>
#include "_3_(9).h"
using namespace std;
int main() {
    Polynomial pal1, pal2, pal3;
    pal1.SetPolynomial();
    pal2.SetPolynomial();
    pal3 = pal1 + pal2;
    cout << pal3 << endl;
    pal3 = pal1 - pal2;
    cout << pal3 << endl;
    pal3 = pal1 * pal2;
    cout << pal3 << endl;
    cout << pal1 << endl << pal2 << endl;
    return 0;
}