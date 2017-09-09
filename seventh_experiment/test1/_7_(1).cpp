#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
void sort(T a[], int n);
int main() {
    int a[] = {7,5,1,4,2};
    char b[] = {"awedcvf"};
    sort(a, sizeof(a)/ sizeof(a[0]));
    sort(b, strlen(b));
    for (int i=0; i< sizeof(a)/ sizeof(a[0]);i++)
        cout << a[i];
    cout << endl << "b: " << b << endl;
    return 0;
}

template <typename T>
void sort(T a[], int n)
{
    for (int i=1;i<n;i++)
    {
        if (a[i-1] > a[i])
        {
            T temp = a[i];
            int j = i;
            while (j > 0 && a[j - 1] > temp)
            {
                a[j] = a[j - 1];
                j--;
            }
            a[j] = temp;
        }
    }
}