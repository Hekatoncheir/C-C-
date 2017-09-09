#include <iostream>
using namespace std;
void f1(int m, int n)
{
    if (m) {
        f1(m / n, n);
        if (m%n == 10)
            cout << 'A';
        if (m%n == 11)
            cout << 'B';
        if (m%n == 12)
            cout << 'C';
        if (m%n == 13)
            cout << 'D';
        if (m%n == 14)
            cout << 'E';
        if (m%n == 15)
            cout << 'F';
        else
            cout << m%n;
    }
}

void f2(int m, int n)
{
    int flag=0;
    int a[20];
    while (m)
    {
        a[flag] = m%n;
        flag++;
        m = m/n;
    }
    flag--;
    for (; flag>=0;flag--) {
        if (a[flag] == 10)
            cout << 'A';
        if (a[flag] == 11)
            cout << 'B';
        if (a[flag] == 12)
            cout << 'C';
        if (a[flag] == 13)
            cout << 'D';
        if (a[flag] == 14)
            cout << 'E';
        if (a[flag] == 15)
            cout << 'F';
        else
            cout << a[flag];
    }
}
int main() {
    int m, n;
    cout << "Please enter the m: ";
    cin >> m;
    cout << "Please enter the n: ";
    cin >> n;
    f1(m,n);
    return 0;
}