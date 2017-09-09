//
// Created by _lian on 2017/4/1.
//

#ifndef TEST2_6_2_H
#define TEST2_6_2_H
#define PI 3.141593

class Shape{
public:
    Shape() {;}
    virtual ~Shape() {;}
    virtual void show()=0;
};

class TwoDimensionalShape : Shape{
public:
    TwoDimensionalShape();
    virtual ~TwoDimensionalShape();
    virtual double getArea();
    virtual void show();
};

class Circle : public TwoDimensionalShape{
private:
    double radius;
    double area;
public:
    Circle(double radius=0);
    virtual ~Circle();
    virtual double getArea();
    virtual void show();
    void Set();
};

class Triangle : public TwoDimensionalShape{
private:
    double base;
    double height;
    double area;
public:
    Triangle(double base=0, double height=0);
    virtual ~Triangle();
    virtual double getArea();
    virtual void show();
    void Set();
};

class Square : public TwoDimensionalShape{
private:
    double side;
    double area;
public:
    Square(double side=0);
    virtual ~Square();
    virtual double getArea();
    virtual void show();
    void Set();
};

class ThreeDimenionalShape : public Shape{
public:
    ThreeDimenionalShape();
    virtual ~ThreeDimenionalShape();
    virtual void show();
    virtual double getArea();
    virtual double getVolume();
};

class Sphere : public ThreeDimenionalShape{
private:
    double radius;
    double superficial;
    double volume;
public:
    Sphere(double radius=0);
    virtual ~Sphere();
    virtual double getArea();
    virtual double getVolume();
    virtual void show();
    void Set();
};

class Cube : public ThreeDimenionalShape{
private:
    double base;
    double superficial;
    double volume;
public:
    Cube(double base=0);
    virtual ~Cube();
    virtual double getArea();
    virtual double getVolume();
    virtual void show();
    void Set();
};
#endif //TEST2_6_2_H
