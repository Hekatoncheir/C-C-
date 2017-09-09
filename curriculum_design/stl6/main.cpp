#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    map<string,int> map1;
    string s;
    while(s != ".")
    {cin>>s;map1[s]++;}
    for(map<string,int>::iterator i=map1.begin();i!=map1.end();i++)
        cout<<i->first<<"  "<<sei->cond<<endl;
    return 0;
}