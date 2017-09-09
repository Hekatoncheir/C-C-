//
// Created by _lian on 2017/4/1.
//

#include "_6_(2).h"
#include <iostream>
#include <cmath>
using namespace std;

//class Shape
void Shape::show() {
    cout << "Hello,world!" << endl;
}

TwoDimensionalShape::TwoDimensionalShape() : Shape(){
    ;
}

TwoDimensionalShape::~TwoDimensionalShape() {
    ;
}

//class TwoDimensionalShape
void TwoDimensionalShape::show() {
    cout << "This is a two dimensional shape.";
}

double TwoDimensionalShape::getArea() {
    return 0;
}

//class Circle
Circle::Circle(double radius) {
    this->radius = radius;
    this->area = this->getArea();
}

Circle::~Circle() {
    ;
}

double Circle::getArea() {
    return PI*pow(this->radius, 2);
}

void Circle::show() {
    cout << "Circle radius: " << this->radius << " area: " << this->area << endl;
}

void Circle::Set() {
    cout << "Circle" << endl;
    cout << "Please enter the Circle's radius: " << endl;
    while (! (cin >> this->radius))
        cout << "Please enter the radius again: ";
    while (this->radius <= 0)
    {
        cout << "Please enter the radius bigger than zero: ";
        cin >> this->radius;
    }
}

//class Triangle
Triangle::Triangle(double base, double height) {
    this->base = base;
    this->height = height;
    this->area = this->getArea();
}

Triangle::~Triangle() {
    ;
}

double Triangle::getArea() {
    return this->base*this->height/2;
}

void Triangle::show() {
    cout << "Triangle base: " << this->base << " height: " << this->height << " area: " << this->area << endl;
}

void Triangle::Set() {
    cout << "Triangle" << endl;
    cout << "Please enter the Triangle's base: ";
    while (! (cin >> this->base))
        cout << "Please enter the base again: ";
    while (this->base <= 0)
    {
        cout << "Please enter the base bigger than zero: ";
        cin >> this->base;
    }
    cout << "Please enter the Triangle's height: ";
    while (! (cin >> this->height))
        cout << "Please enter the height again: ";
    while (this->height <= 0)
    {
        cout << "Please enter the height bigger than zero: ";
        cin >> this->height;
    }
}

//class Square
Square::Square(double side) {
    this->side = side;
    this->area = this->getArea();
}

Square::~Square() {
    ;
}

double Square::getArea() {
    return pow(side, 4);
}

void Square::Set() {
    cout << "Square" << endl;
    cout << "Please enter the Square's side: ";
    while (!(cin >> this->side))
        cout << "Please enter the side again: ";
    while (this->side <= 0)
    {
        cout << "Please enter the side bigger than zero: ";
        cin >> this->side;
    }
}

void Square::show() {
    cout << "Square side: " << this->side << " area: " << this->area << endl;
}

//class ThreeDimenionalShape
ThreeDimenionalShape::ThreeDimenionalShape() : Shape() {
    ;
}

ThreeDimenionalShape::~ThreeDimenionalShape() {
    ;
}

void ThreeDimenionalShape::show() {
    cout << "This is a three dimensional shape" << endl;
}

double ThreeDimenionalShape::getArea() {
    return 0;
}

double ThreeDimenionalShape::getVolume() {
    return 0;
}

//class Sphere
Sphere::Sphere(double radius) {
    this->radius = radius;
    this->superficial = this->getArea();
    this->volume = this->getVolume();
}

Sphere::~Sphere() {
    ;
}

void Sphere::Set() {
    cout << "Sphere" << endl;
    cout << "Please enter the Sphere's radius: ";
    while (!(cin >> this->radius))
        cout << "Please enter the radius again: ";
    while (this->radius <= 0)
    {
        cout << "Please enter the radius bigger than zero: ";
        cin >> this->radius;
    }
}

double Sphere::getArea() {
    return 4*PI*pow(this->radius, 2);
}

double Sphere::getVolume() {
    return 4*PI*pow(this->radius, 3)/3;
}

void Sphere::show() {
    cout << "Sphere radius: " << this->radius << " area: " << this->superficial << " volume: " << this->volume << endl;
}

//class Cube
Cube::Cube(double base) {
    this->base = base;
    this->superficial = this->getArea();
    this->volume = this->getVolume();
}

Cube::~Cube() {
    ;
}

double Cube::getArea() {
    return 6*pow(this->base, 2);
}

double Cube::getVolume() {
    return pow(this->base, 3);
}

void Cube::Set() {
    cout << "Cube" << endl;
    cout << "Please enter the Cube's base: ";
    while (! (cin >> this->base))
        cout << "Please enter the base again: ";
    while (this->base <= 0)
    {
        cout << "Please enter the base bigger than zero: ";
        cin >> this->base;
    }
}

void Cube::show() {
    cout << "Cube base: " << this->base << " area: " << this->superficial << " volume: " << this->volume << endl;
}
