#include <iostream>
#include "_6_(3).h"
using namespace std;
int main() {
    List a;
    a.push_back(3);
    a.push_head(4);
    cout << a.size() << endl;
    cout << a[0]->num << " " <<a[1]->num << " " << a[2]->num << " " << endl;
    a.insert(a.begin(), 4, 1);
    cout << a[0]->num << " " <<a[1]->num << " " << a[2]->num << " " << a[3]->num << endl;
    cout << a.size() << endl;
    a.erase(a.end());
    cout << a[0]->num << " " <<a[1]->num << " " << a[2]->num << " " << endl;
    cout << a.size() << endl;
    return 0;
}