//
// Created by _lian on 2017/3/13.
//

#ifndef TEST3_2_4_H
#define TEST3_2_4_H
class Rational
{
public:
    Rational(int nn=1,int mm=1);	      //构造函数
    Rational  R_add(Rational & A);	  //加
    Rational  R_sub(Rational & A);	  //减
    Rational  R_mul(Rational & A);	  //乘
    Rational  R_div(Rational & A);	  //除
    void print();		 //以简分数形式显示，注意约分
private:
    void simple( );		 //约分
    int m;            //分母
    int n;             //分子
};

#endif //TEST3_2_4_H
