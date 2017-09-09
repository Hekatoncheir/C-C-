#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string, int> map1;
    map1["Zero"]=0;
    map1["One"]=1;
    map1["Two"]=2;
    map1["Three"]=3;
    map1["Four"]=4;
    map1["Five"]=5;
    map1["Six"]=6;
    map1["Seven"]=7;
    map1["Eight"]=8;
    map1["Nine"]=9;
    map1["Ten"]=10;
    string s;
    cin>>s;
    cout<<map1[s];
    return 0;
}