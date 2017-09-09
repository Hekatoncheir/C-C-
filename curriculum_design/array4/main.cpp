#include <iostream>
using namespace std;
void move_k(int a[], int k, int n)
{
    for (int i=0;i<k;i++)
    {
        int tem = a[n];
        for (int j=n;j>=0;j--)
            a[j] = a[j-1];
        a[0] = tem;
    }
}
int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    move_k(a, num, sizeof(a)/ sizeof(int)-1);
    for (int i=0; i<sizeof(a)/sizeof(int); i++)
        cout << a[i] << " ";
    return 0;
}