//
// Created by _lian on 2017/3/21.
//

#include <vector>
#include <iostream>
#include "_4_(3).h"

int Set::n = 0;

using namespace std;
Set::Set() {
    this->num=0;
    this->n++;
}

Set::Set(const Set& set1) {
    this->num = set1.num;
    this->set.assign(set1.set.begin(), set1.set.end());
    this->n++;
}

Set::~Set() {
    this->n--;
}

void Set::Add(int number) {
    vector<int>::iterator it;
    int flag=1;
    if (this->num < MAX) {
        for (it = this->set.begin(); it != this->set.end(); it++) {
            if (*it == number) {
                cout << "Please enter another number: ";
                flag = 0;
                break;
            }
        }
        if (flag != 0) {
            this->set.insert(this->set.begin()+num, number);
            this->num++;
        }
    }
    else
        cout << "FULL!!!";
}

void Set::Del(int number) {
    vector<int>::iterator it;
    int flag=0;
    if (this->num>0) {
        for (it = this->set.begin(); it != this->set.end(); it++) {
            if (*it == number) {
                this->set.erase(it);
                this->num--;
                flag = 1;
                break;
            }
        }
        if (flag != 1)
            cout << "We don't find this number in this set";
    }
    else
        cout << "EMPTY!!!";
}

Set Set::operator+(const Set& set) {
    vector<int>::iterator it, in;
    Set a = set;
    for (it=this->set.begin();it!=this->set.end();it++)
    {
        for (in=a.set.begin();in!=a.set.end();in++)
            if (*it != *in)
                a.Add(*it);
    }
    return a;
}

Set Set::operator*(const Set& set) {
    vector<int>::iterator it, in;
    Set a;
    for (it=this->set.begin();it!=this->set.end();it++)
    {
        for (in=a.set.begin();in!=a.set.end();in++)
            if (*it == *in)
                a.Add(*it);
    }
    return a;
}

void Set::operator=(const Set& set1) {
    this->set.assign(set1.set.begin(), set1.set.end());
}

void Set::operator-=(const Set& set) {
    Set a = *this * set;
    vector<int>::iterator it, in;
    for (it=this->set.begin();it!=this->set.end();it++)
    {
        for (in=a.set.begin();in!=a.set.end();in++)
            if (*it == *in)
                this->Del(*it);
    }
}