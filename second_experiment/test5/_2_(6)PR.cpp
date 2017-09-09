//
// Created by _lian on 2017/3/14.
//

#include <iostream>
#include <cstring>
#include "_2_(6).h"
using namespace std;

String::String(const char *str) {
    strcpy(this->m_data, str);
}

String::String(const String &other) {

    strcpy(this->m_data, other.m_data);
}

String::~String() {
    ;
}

void String::show() {
    cout << this->m_data << endl;
}