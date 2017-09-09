#include <iostream>
#define length 100
static int flag = 0;
using namespace std;

int Search(int dArr[], int n, int Key )
{
    for (int i=0;i<n;i++)
    {
        if (dArr[i] == Key)
            return 0;
    }
    return 1;
}

int* creat(int* prc)
{
    int temp[length];
    for (int i=0;i<length;i++)
    {
        if (Search(temp, flag, *(prc+i)) == 1)
        {
            *(temp+flag) = *(prc+i);
            flag++;
        }
    }
    int *temp2 = new int[flag];
    for (int i=0;i<flag;i++) {
        *(temp2 + i) = *(temp + i);
    }
    cout << endl;
    return temp2;
}
int main() {
    int a[length];
    for (int i=0;i<length;i++)
        a[i] = rand()%30;
    int* b = creat(a);
    while (flag) {
        cout << *b << " ";
        b++; flag--;
    }
    return 0;
}