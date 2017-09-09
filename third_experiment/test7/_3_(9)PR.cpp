//
// Created by _lian on 2017/3/21.
//

#include <iostream>
#include <vector>
#include <cmath>
#include "_3_(9).h"
using namespace std;

void Polynomial::SetPolynomial() {
    cout << "What is the highest order term? ";
    double m;
    cin >> this->heightest;
    for (int i=0; i<=this->heightest; i++)
    {
        cout << "Please enter the x^" << i << " coefficient: ";
        cin >> m;
        this->polynomial.insert(this->polynomial.begin()+i, m);
    }
}

Polynomial::Polynomial() {
    this->heightest=0;
    this->polynomial.push_back(0);
}

Polynomial::~Polynomial() {
    ;
}

double Polynomial::Operator(double x) {
    double num=0;
    for (int i=0;i<=this->heightest;i++)
    {
        num += this->polynomial[i]*pow(x,i);
    }
    return num;
}

Polynomial operator+(const Polynomial &pal1, const Polynomial &pal2) {
    Polynomial polynomial1;
    polynomial1.heightest = pal1.heightest>=pal2.heightest ? pal1.heightest:pal2.heightest;
    int n = pal1.heightest<=pal2.heightest ? pal1.heightest:pal2.heightest;
    for (int i=0;i<=n;i++)
    {
        polynomial1.polynomial.insert(polynomial1.polynomial.begin()+i,pal1.polynomial[i]+pal2.polynomial[i]);
    }
    if (pal1.heightest>pal2.heightest)
    {
        for (n=n+1;n<=polynomial1.heightest;n++)
            polynomial1.polynomial.insert(polynomial1.polynomial.begin()+n,pal1.polynomial[n]);
    }
    else if (pal1.heightest<pal2.heightest)
    {
        for (n=n+1;n<=polynomial1.heightest;n++)
            polynomial1.polynomial.insert(polynomial1.polynomial.begin()+n,pal2.polynomial[n]);
    }
    return polynomial1;
}

Polynomial operator-(const Polynomial &pal1, const Polynomial &pal2) {
    Polynomial polynomial1;
    polynomial1.heightest = pal1.heightest>=pal2.heightest ? pal1.heightest:pal2.heightest;
    int n = pal1.heightest<=pal2.heightest ? pal1.heightest:pal2.heightest;
    for (double i=0;i<=n;i++)
    {
        polynomial1.polynomial.insert(polynomial1.polynomial.begin()+i,pal1.polynomial[i]-pal2.polynomial[i]);
    }
    if (pal1.heightest>pal2.heightest)
    {
        for (n=n+1;n<=polynomial1.heightest;n++)
            polynomial1.polynomial.insert(polynomial1.polynomial.begin()+n,pal1.polynomial[n]);
    }
    else if (pal1.heightest<pal2.heightest)
    {
        for (n=n+1;n<=polynomial1.heightest;n++)
            polynomial1.polynomial.insert(polynomial1.polynomial.begin()+n,pal2.polynomial[n]);
    }
    return polynomial1;
}

Polynomial operator*(const Polynomial &pal1, const Polynomial &pal2) {
    Polynomial polynomial1;
    polynomial1.heightest = pal1.heightest+pal2.heightest;
    for (int i=0;i<=pal1.heightest;i++)
    {
        for (int j=0;j<=pal2.heightest;j++)
        {
            polynomial1.polynomial.insert(polynomial1.polynomial.begin()+i+j,pal1.polynomial[i]*pal2.polynomial[j]+polynomial1.polynomial[i+j]);
        }
    }
    return polynomial1;
}

ostream& operator<<(ostream &os, const Polynomial &polynomial1) {
    for (int i=0;i<=polynomial1.heightest;i++)
    {
        if (polynomial1.polynomial[i]==0)
            ;
        else if (polynomial1.polynomial[i]>0 && i==0)
            os << polynomial1.polynomial[i];
        else if (polynomial1.polynomial[i]>0 && i!=0)
            os << "+" << polynomial1.polynomial[i] << "x^" << i;
        else if (polynomial1.polynomial[i]<0 && i!=0)
            os << polynomial1.polynomial[i] << "x^" << i;
        else if (polynomial1.polynomial[i]<0 && i==0)
            os << polynomial1.polynomial[i];
    }
    return os;
}