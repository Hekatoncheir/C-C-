#include <iostream>
#include "_4_(1).h"
using namespace std;
int main() {
    Point p1(2,1),p2;
    double d = p1-p2;   //计算两点距离
    cout<<p1<<"->"<< p2<< " = "<<d<<endl;  // 输出 [2,1]  [0,0] = 2.23
    return 0;
}