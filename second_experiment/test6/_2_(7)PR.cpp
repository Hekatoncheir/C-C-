//
// Created by _lian on 2017/3/14.
//

#include <iostream>
#include "_2_(7).h"
using namespace std;

Array::Array() {
    *this->m_data = {0};
}

int& Array::getData(int i) {
    while ((i-1)<0 || (i-1)>10)
    {
        cout << "Please enter the number more than 1 and less than 10" << endl;
        cin >> i;
    }
    return this->m_data[i-1];
}

void Array::print() {
    for (int i=0;i<10;i++)
        cout << this->m_data[i] << " ";
}

void Array::input() {
    for (int i=0;i<10;i++)
    {
        cout << "Please enter the " << i+1 << " number: ";
        cin >> this->m_data[i];
    }
}