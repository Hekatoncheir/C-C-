//
// Created by _lian on 2017/3/21.
//

#ifndef TEST1_4_1_H
#define TEST1_4_1_H


class Point
{
public:
    Point( int a= 0, int b = 0 ):x(a),y(b) {this->x = a; this->y = b;  }
    void setPoint( int a, int b ) { x = a ;  y = b ; }
    friend std::ostream& operator<<(std::ostream& os, const Point& p1);
    //friend double operator-(const Point& p1, const Point& p2);
    double operator-(const Point& p1);
private:
    int x, y;	// 平面坐标
};

#endif //TEST1_4_1_H
