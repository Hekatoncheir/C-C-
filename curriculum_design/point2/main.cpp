#include <iostream>
#include <string.h>
using namespace std;

void swap(char *a[], int n)
{
    char *temp = new char[100];
    for(int i =0 ; i< n-1; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            if (strcmp(a[j], a[j+1]) > 0)
            {
                strcpy(temp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], temp);
            }
        }
    }
}
int main() {
    char* a[5] = {NULL};
    for (int i=0;i<5;i++) {
        char temp[100];
        cin >> temp;
        a[i] = new char[strlen(temp)];
        strcpy(a[i], temp);
    }
    swap(a, 5);
    for (int i=0;i<5;i++)
        cout << a[i] << endl;
    return 0;
}