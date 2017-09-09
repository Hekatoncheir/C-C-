#include <iostream>
#include <cstring>
using namespace std;

class vehicle{
public:
    vehicle(){}
    virtual ~vehicle(){}
    virtual void print()=0;
};
class car : public vehicle{
public:
    car (){;}
    ~car(){;}
    virtual void print(){cout << "This is car" << endl;}
};
class truck : public vehicle{
public:
    truck (){;}
    ~truck(){;}
    virtual void print(){cout << "This is truck" << endl;}
};
class boat : public vehicle{
public:
    boat (){;}
    ~boat(){;}
    virtual void print(){cout << "This is boat" << endl;}
};
int main() {
    vehicle* a[3];
    a[0] = new car;
    a[1] = new truck;
    a[2] = new boat;
    for (int i=0;i<3;i++)
        a[i]->print();
    return 0;
}