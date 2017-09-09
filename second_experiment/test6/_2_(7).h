//
// Created by _lian on 2017/3/14.
//

#ifndef TEST6_2_7_H
#define TEST6_2_7_H
class Array
{
public:
    Array();                   //所有数组元素初始化为0
    int& getData(int i);	       //返回下标为i的数组元素的引用
    void print();                //打印出所有数组元素的值
    void input();                //对所有数组元素进行输入
private:
    int m_data[10];
};
#endif //TEST6_2_7_H
