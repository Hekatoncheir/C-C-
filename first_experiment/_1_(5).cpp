#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#define MAX 10000
int main ()
{
    using namespace std;
    srand(unsigned(time(0)));
    vector <double> a(50);
    vector <double > b(50);
    double flag = 0;
    for (int num=0;num<MAX;num++) {
        for (int i = 0; i < 50; i++) {
            a[i] = rand() % (365) + 1;
            if (i != 0) {
                int n = 0;
                    while (a[i] != a[n] && n < i)
                        n++;
                    if (n != i) {
                        flag++;
                        break;
                    }
            }
        }
        a.swap(b);
    }
    cout << (MAX-flag)/MAX << endl;
    return 0;
}


