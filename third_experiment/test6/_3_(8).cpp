#include <iostream>
#include "_3_(8).h"
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    //srand(unsigned(time(0)));
    int num, prc=0, add=0;
    int i = 1;
    lined_list* head = NULL;
    while (i<=100)
    {
        num = rand() % (191) + 10;
        if (num >= prc)
        {
            lined_list* prd = new lined_list (num);
            head = Create(head, prd);
            cout << head << endl;
            prc = num;
            i++;
        }
        else
            continue;
    }
    while (head)
    {
        lined_list* pra = head;
        add += head->getnumber();
        head = Delete(head, pra);
        cout << head << endl;
    }
    cout << "The number of this array is: " << add;
    return 0;
}