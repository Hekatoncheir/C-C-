#include <iostream>
#include "_3_(1).h"
using namespace std;
int main() {
    Myclass my(10,20),t(30,40);
    my.print( );
    my. copy(t);
    my.print( );
    return 0;
}