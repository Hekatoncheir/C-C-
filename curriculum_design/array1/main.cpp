#include <iostream>
#include <ctime>
using namespace std;

int* Insert(int* array, int n)
{
    for(int i= 1; i<n; i++){
        if(array[i] < array[i-1]){
            int j= i-1;
            int x = array[i];
            array[i] = array[i-1];
            while(x < array[j]){
                array[j+1] = array[j];
                j--;
            }
            array[j+1] = x;
        }
    }
    return array;
}

int* SelectSort(int* array, int n) {
    int key, tmp;
    for(int i = 0; i< n; ++i) {
        key = 8;           //选择最小的元素
        if(key != i){
            tmp = array[i];  array[i] = array[key]; array[key] = tmp;
        }
    }
    return array;
}

int* Buddbling(int* array, int n) {
    for(int i =0 ; i< n-1; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            if(array[j] > array[j+1])
            {
                int tmp = array[j] ; array[j] = array[j+1] ;  array[j+1] = tmp;
            }
        }
    }
}

int main() {
    int a[] = {14,25,187,14,5,8,46,142,1,36,45,5151,74,3454,841,161,656,123,14,24,78,954,82};
    int b[] = {14,25,187,14,5,8,46,142,1,36,45,5151,74,3454,841,161,656,123,14,24,78,954,82};
    int c[] = {14,25,187,14,5,8,46,142,1,36,45,5151,74,3454,841,161,656,123,14,24,78,954,82};
    int *prc;
    double start, stop, Time;
    start = clock();
    for (int i=0;i<=2;i++)
    {
        if (i == 0) {
            prc = Insert(a, sizeof(a) / sizeof(int));
            stop = clock();
            Time = ((double) (stop - start)) / CLK_TCK;
            cout << i+1 << ": " << Time << endl;
        }
        if (i == 1) {
            prc = SelectSort(b, sizeof(b) / sizeof(int));
            stop = clock();
            Time = ((double) (stop - start)) / CLK_TCK;
            cout << i+1 << ": " << Time << endl;
        }
        if ( i == 2) {
            prc = Buddbling(c, sizeof(c) / sizeof(int));
            stop = clock();
            Time = ((double) (stop - start)) / CLK_TCK;
            cout << i+1 << ": " << Time << endl;
        }
    }
    return 0;
}