#include <iostream>
int main ()
{
    using namespace std;
    int ** array;
    int num = 0, min = 0, max = 0;
    const int N = 3, M = 3;
    array = new int *[M];
    for (int n =0;n<M;n++)
        array[n] = new int [N];
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<M;j++)
        {
            cout << "Please enter the (" << i+1 << "," << j+1 << ") number";
            cin >> array[i][j];
            num += array[i][j];
        }
    }
    cout << "the sum of this array is " << num << endl;
    min = max = array[0][0];
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<M;j++)
        {
            min = (min<array[i][j]) ? min:array[i][j];
            max = (max>array[i][j]) ? max:array[i][j];
        }
    }
    cout << "The max number is " << max << endl;
    cout << "The min number is " << min << endl;
    for (int n=0;n<N;n++)
        delete[](array[n]);
    return 0;
}
