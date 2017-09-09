#include <iostream>
#include "_2(8).h"
int main() {
    using namespace std;
    yuan a = yuan (2,4,5);
    yuan b = yuan (3,7,8);
    double ar = a.getr();
    double br = b.getr();
    double sum = ar + br;
    double san = a.juli(b);
    if (san < sum)
    {
        cout << '0' << endl;
    }
    if (san == sum)
    {
        cout << "1" << endl;
    }
    if (san > sum)
    {
        cout << "2" << endl;
    }
    return 0;
}