#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> vector1;
    int n;
    for (int i=0;i<100;i++)
        vector1.push_back(rand()%50+1);
    sort(vector1.begin(), vector1.end());
    cout << "PLease enter the number you want to find: ";
    cin >> n;
    if (find(vector1.begin(), vector1.end(), n) == vector1.end())
        cout << "We can't find it!";
    else
        cout << "We find it!";
    return 0;
}