//
// Created by _lian on 2017/3/15.
//

#ifndef TEST7_2_8_H
#define TEST7_2_8_H
//class point {
//private:
  //  double x, y ,z;
//public:
  //  point(double x=0,double y=0, double z=0);
    //void setX(double x);
    //void setY(double y);
    //void setZ(double z);
//};

class yuan {
private:
    double x,y;
    double r;
public:
    yuan (double r=0, double x=0, double y=0);
    double juli (const yuan &b);
    void setr(double r);
    void setX(double x);
    void setY(double y);
    double getr();
};
#endif //TEST7_2_8_H
