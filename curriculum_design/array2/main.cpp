#include <iostream>
using namespace std;
static int flag=0;
int binarySearch( double dArr[], int low, int high, double Key )
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (dArr[mid] < Key)
        {
            low = mid + 1;
        }
        else if (dArr[mid]>Key)
        {
            high = mid - 1;
        }
        else
        {
            flag++;
            binarySearch(dArr, mid+1, high, Key);
            binarySearch(dArr, low, mid-1, Key);
            break;
        }
    }
    if (flag != 0)
        return flag;
    else
        return -1;
}

int main() {
    double dArr[] = {1,2,2,2,3,4,5,6,7,8,9};
    int i = binarySearch(dArr, 0, sizeof(dArr)/ sizeof(double)-1, 2);
    cout << i;
    return 0;
}