//
// Created by _lian on 2017/3/15.
//

#include <iostream>
using namespace std;

int main ()
{
    double n, m;
    char ch;
    cout << "Please enter the first number:";
    cin >> n;
    cout << "Please enter the second number:";
    cin >> m;
    cout << "Please enter the operator";
    cin >> ch;
    while (cin.get() != '\n')
        continue;
    switch (ch)
    {
        case '+':
            cout << n+m << endl;
            break;
        case '-':
            cout << n-m << endl;
            break;
        case '*':
            cout << n*m << endl;
            break;
        case '/':
            cout << n/m << endl;
            break;
    }
    return 0;
}