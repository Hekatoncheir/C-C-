#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int main() {
    set<int> set1, set2,set3;
    for (int i=0;i<100;i++)
    {
        set1.insert(i);
        set2.insert(2*i);
    }
    set_intersection(set1.begin(),set1.end(),set2.begin(),set2.end(),inserter(set3,set3.begin()));
    set<int>::iterator i=set3.begin();
    while(i != set3.end())
        cout<<*i++<<" ";
    return 0;
}