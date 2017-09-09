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
    cout<<"输出结果："<<endl;
    cout<<"正方体表面积："<<p->surface_area()<<endl;
    cout<<"正方体体积："<<p->volume()<<endl;
    p=&obj2;
    cout<<"球体表面积："<<p->surface_area()<<endl;
    cout<<"球体体积："<<p->volume()<<endl;p=&obj1;
    p=&obj3;
    cout<<"圆柱体表面积："<<p->surface_area()<<endl;
    cout<<"圆柱体体积："<<p->volume()<<endl;
    return 0;
}
