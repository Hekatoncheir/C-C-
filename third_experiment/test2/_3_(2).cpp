#include <iostream>
#include "_3_(2).h"
using namespace std;
int main() {
    Plural pl(1,2), pl2(3,-4);
    Plural pl3;
    pl3 = pl + pl2;
    cout << "1. " << pl << "2. " << pl2 << "3. " << pl3;
    return 0;
}