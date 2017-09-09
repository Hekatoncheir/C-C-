//
// Created by _lian on 2017/3/8.
//

#include <iostream>
struct job
{
    char  name;
    double salary;
    int floor;
};
void Swap(job & a, job & b);
template <> void Swap<job>(job & a, job & b);
int mian ()
{
    using namespace std;
    job job1 = {'l', 80.5, 80};
    job job2 = {'w', 90.5, 90};
    Swap(job1, job2);
    cout << job1.name << job1.floor << job1.salary << endl;
    cout << job2.name << job2.floor << job2.salary << endl;
    cout << job1.name << endl << job2.name;
    return 0;
}
void Swap (job & a, job & b)
{
    job temp;
    temp = a;
    a = b;
    b = temp;
}
template <> void Swap<job>(job & a, job & b)
{
    char  temp;
    temp = a.name;
    a.name = b.name;
    b.name = temp;
}
