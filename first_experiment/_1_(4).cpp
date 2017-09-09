//
// Created by _lian on 2017/3/13.
//

#include <iostream>
void Swap (int & a, int & b);
int main ()
{
    using namespace std;
    int a=0,b=1;
    Swap(a,b);
    cout << "a:" << a << endl << "b:" << b << endl;
}

void Swap (int & a, int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}