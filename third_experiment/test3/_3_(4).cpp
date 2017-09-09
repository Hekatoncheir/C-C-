#include <iostream>
#include "_3_(4).h"
using namespace std;
int main() {
    Carlo *carlo1 = new Carlo(48, 96);
    Carlo *carlo2 = new Carlo(34, 68);
    Carlo *carlo3 = new Carlo(43.5, 87);
    cout << *carlo1;
    delete(carlo2);
    cout << *carlo3;
    return 0;
}