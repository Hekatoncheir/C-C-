#include <iostream>
#include "_2_(6).h"
using namespace std;
int main() {
    const char *str = "Hello, world!";
    String a = String (str);
    String b = a;
    a.show();
    b.show();
    return 0;
}