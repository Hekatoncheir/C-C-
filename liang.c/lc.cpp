#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
int main ()
{
    using namespace std;
    srand(unsigned(time(0)));
    vector <int> a;
    int flag = 0;
    for (int num=0;num<10000;num++) {
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
        a.clear();
    }
    cout << flag << endl;
    return 0;
}