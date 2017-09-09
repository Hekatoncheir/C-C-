//
// Created by _lian on 2017/3/22.
//

#include <iostream>
#include "_4_(6).h"
#include <cmath>
using  namespace std;

Poly::Poly() {
    this->date = new Node;
    this->date->exp = 0;
    this->date->coe = 0;
    this->date->link = NULL;
}

Poly::Poly(const Poly &poly) {
    Node temp = *poly.date;
    this->date = &temp;
}

Poly::~Poly() {
    delete(this->date);
}

Poly Poly::Create() {
    cout << "we will create Poly, enter not 'q' to start" << endl;
    char ch;
    int flag=0;
    Node* prc = this->date;
    while ((ch = cin.get()) != 'q')
    {
        while (cin && cin.get() != '\n')
            continue;
        Node* temp = new Node;
        cout << "Please enter the coe" << "(exp is " << flag << ") :";
        cin >> temp->coe;
        temp->exp=flag;
        if (flag==0)
            prc = temp;
        prc->link = temp;
        prc = temp;
        cout << "Enter anything key to continue(enter q to quit!): ";
        flag++;
    }
}
double Poly::Operator(double num) {
    double number=0;
    Node* prc = this->date;
    while (prc)
    {
        number += prc->coe*pow(num, prc->exp);
        prc = prc->link;
    }
    return number;
}

Poly Poly::operator+(const Poly &poly) {
    Node* prc = this->date;
    Node* prc2 = poly.date;
    Poly* poly1;
    Node* prc3 = poly1->date;
    while (prc && prc2)
    {
        Node* temp;
        temp->coe = prc->coe+prc->coe;
        temp->exp = prc->exp;
        prc = prc->link;
        prc2 = prc2->link;
        if (temp->exp==0)
            prc3 = temp;
        prc3->link = temp;
        prc3 = temp;
    }
    while (prc)
    {
        Node* temp2;
        temp2->coe = prc->coe;
        temp2->exp = prc->exp;
        prc = prc->link;
        prc3->link = temp2;
        prc3 = temp2;
    }
    while (prc2)
    {
        Node* temp2;
        temp2->coe = prc2->coe;
        temp2->exp = prc2->exp;
        prc = prc2->link;
        prc3->link = temp2;
        prc3 = temp2;
    }
    return *poly1;
}

Poly Poly::operator-(const Poly &poly) {
    Node* prc = this->date;
    Node* prc2 = poly.date;
    Poly* poly1;
    Node* prc3 = poly1->date;
    while (prc && prc2)
    {
        Node* temp;
        temp->coe = prc->coe-prc->coe;
        temp->exp = prc->exp;
        prc = prc->link;
        prc2 = prc2->link;
        if (temp->exp==0)
            prc3 = temp;
        prc3->link = temp;
        prc3 = temp;
    }
    while (prc)
    {
        Node* temp2;
        temp2->coe = prc->coe;
        temp2->exp = prc->exp;
        prc = prc->link;
        prc3->link = temp2;
        prc3 = temp2;
    }
    while (prc2)
    {
        Node* temp2;
        temp2->coe = -prc2->coe;
        temp2->exp = prc2->exp;
        prc = prc2->link;
        prc3->link = temp2;
        prc3 = temp2;
    }
    return *poly1;
}

Poly Poly::operator*(const Poly &poly) {
    Node* prc = this->date;
    Node* prc2 = poly.date;
    Poly* poly1;
    Node* prc3 = poly1->date;
    Node* prc4 = poly1->date;
    int flag=0;
    while (prc)
    {
        while (prc2)
        {
            Node* temp;
            temp->coe = prc->coe*prc2->coe;
            temp->exp = prc->exp+prc2->exp;
            if (flag==0)
                prc3 = temp;
            while (prc4)
            {
                if (prc4->exp==temp->exp)
                    prc4->coe = prc4->coe+temp->coe;
                prc4 = prc4->link;
            }
            prc4 = poly1->date;
            flag++;
        }
    }
    return *poly1;
}