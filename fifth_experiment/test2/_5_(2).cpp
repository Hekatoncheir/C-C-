#include <iostream>
#include "_5_(2).h"
using namespace std;
int main() {
    edit_string a = edit_string("Hell,world");
    char* ptr = a.move();
    a.show();
    a.add(ptr, 'o');
    a.show();
    ptr = a.move();
    a.show();
    a.rep(ptr, 'W');
    cout << a;
    return 0;
}