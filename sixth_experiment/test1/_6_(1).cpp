#include <iostream>
#include "_6_(1).h"
using namespace std;

int main()
{
    container *p;
    cube obj1(10);
    sphere obj2(6);
    cylinder obj3(4,5);
    p=&obj1;
    cout<<"��������"<<endl;
    cout<<"������������"<<p->surface_area()<<endl;
    cout<<"�����������"<<p->volume()<<endl;
    p=&obj2;
    cout<<"����������"<<p->surface_area()<<endl;
    cout<<"���������"<<p->volume()<<endl;p=&obj1;
    p=&obj3;
    cout<<"Բ����������"<<p->surface_area()<<endl;
    cout<<"Բ���������"<<p->volume()<<endl;
    return 0;
}
