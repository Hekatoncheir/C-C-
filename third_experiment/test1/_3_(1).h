//
// Created by _lian on 2017/3/20.
//

#ifndef TEST1_3_1_H
#define TEST1_3_1_H
#include <iostream>
using namespace std;
class Myclass
{
public:
    Myclass (int a,int b) { x=a;y=b;}
    void copy(Myclass & my);
    void copy2(Myclass & my);
    void print( );
private:
    int x,y;
};

#endif //TEST1_3_1_H
