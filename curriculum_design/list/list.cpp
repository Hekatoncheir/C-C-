#include <iostream>
#include "list.h"
using namespace std;

int main ()
{
        List list;
        int m=7;
        list.push_back(m);
        list.push_head(6);
        int num=8;
        int n=2;
        list.insert(num,n);
        list.print();
        list.erase(num);
        list.print();
        list.erase(n);
        list.print();
        list.push_back(m);
        list.push_head(m);
        list.print();
        cout<<list[n]->num<<endl;
        list.find(m);
        List list2;
        list2.push_back(3);
        list2.push_head(2);
        list2.print();
        list.marge(list2);
        list.print();
        List list3;
        list3.push_back(4);
        list3.push_head(8);
        list3.print();
        List list4=marge(list2,list3);
        list4.print();
        List list;
        list.push_back(1);
        list.push_back(2);
        list.push_back(3);
        list.rebegin();
        list.print();
        return 0;
}
