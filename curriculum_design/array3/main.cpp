#include <iostream>
#define MAX 255
#define length 10000
using namespace std;
int main() {
    int count[MAX+1]={0};
    int array[length+1];
    for (int i=0;i<length;i++)
        array[i] = rand()%255;
    for (int i=0;i<length;i++)
        count[array[i]]++;
    for (int i=0;i<MAX;i++)
    {
        if (count[i]>1)
            cout << i << " ";
    }
    return 0;
}