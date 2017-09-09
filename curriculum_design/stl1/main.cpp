#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
bool f1(vector<T>& a)
{
    return equal(a.begin(), a.end(), a.rbegin());
}
int main() {
    vector<int> a;
    for (int i=0;i<15;i++)
        a.push_back(rand()%10);
    if (f1(a))
        cout << "true";
    else
        cout << "false";
    return 0;
}