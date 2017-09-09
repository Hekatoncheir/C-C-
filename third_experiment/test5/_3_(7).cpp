#include <iostream>
using namespace std;
class Animal;
void SetValue(Animal&, int);
void SetValue(Animal&, int, int);

class Animal
{
public:
    Animal():itsWeight(0),itsAge(0){}
    void show(){cout<<itsWeight<<endl<<itsAge<<endl;}
    //friend void SetValue(Animal& animal, int weight){animal.itsWeight = weight;}
    //friend void SetValue(Animal& animal, int weight, int age){animal.itsWeight = weight;animal.itsAge = age;}
    void SetValue(int weight){this->itsWeight = weight;}
    void SetValue(int weight, int age){this->itsWeight = weight;this->itsAge = age;}
//protected:
    int itsWeight;
    int itsAge;
};
void SetValue(Animal& ta, int tw)
{
    ta.itsWeight = tw;
    //ta.SetValue(tw);
}
void SetValue(Animal& ta, int tw, int tn)
{
    ta.itsWeight = tw;
    ta.itsAge = tn;
    //ta.SetValue(tw, tn);// 设置itsWeight和itsAge值
}

int  main()
{
    Animal peppy;
    SetValue(peppy, 5);
    peppy.show();
    SetValue(peppy, 7, 9);
    peppy.show();
    return 0;
}
