#include <iostream>
#include <list>
using namespace std;

template <typename T>
bool f1(list<T> list1)
{
    return equal(list1.begin(), list1.end(), list1.rbegin());
}
int main() {
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(2);
    list1.push_back(1);
    if (f1(list1))
        cout << "true";
    else
     cout << "false";
    return 0;
}