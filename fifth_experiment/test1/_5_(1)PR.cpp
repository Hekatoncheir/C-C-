//
// Created by _lian on 2017/3/28.
//

#include <iostream>
#include "_5_(1).h"

using namespace std;
Myarray::Myarray(int length) {
    this->length = length;
    this->alist = new int[this->length+1];
}

Myarray::Myarray(const Myarray &myarray) {
    delete[](this->alist);
    this->length = myarray.length;
    this->alist = new int[this->length+1];
    for (int i=0;i<this->length;i++)
        this->alist[i] = myarray.alist[i];
}

Myarray::~Myarray() {
    delete[](this->alist);
}

void Myarray::input() {
    int n, flag=0;
    delete[](this->alist);
    cout << "Please enter the number for this array length: ";
    while (!(cin >> n))
        cout << "Please enter a number again: ";
    this->length = n;
    this->alist = new int[this->length+1];
    while (flag<this->length)
    {
        cout << "Please enter the number for " << flag+1 <<" element: ";
        cin >> n;
        this->alist[flag] = n;
        flag++;
    }
}

void Myarray::display() {
    for (int i=0;i<this->length;i++)
        cout << this->alist[i] << " ";
}

averarry::averarry(int length) : Myarray(length){
    ;
}

averarry::averarry(const Myarray &myarray) : Myarray(myarray){
    ;
}

averarry::~averarry() {
    ;
}

double averarry::summation() {
    int* array = this->getalist();
    int num=0;
    for (int i=0;i<this->getlength();i++)
        num += array[i];
    return double(num)/this->getlength();
}

revarray::revarray(int length) : Myarray(length){
    ;
}

revarray::revarray(const Myarray& myarray) : Myarray(myarray){
    ;
}

revarray::~revarray() {
    ;
}

void revarray::input() {
    int n, flag;
    cout << "Please enter the number for this array length: ";
    while (!(cin >> n))
        cout << "Please enter a number again: ";
    this->setlength(n);
    int* ptr = new int[this->getlength()+1];
    flag = n;
    while (flag>0)
    {
        cout << "Please enter the number for " << flag <<" element: ";
        cin >> n;
        ptr[flag-1] = n;
        flag--;
    }
    setalist(ptr);
}

Nawarry::Nawarry(int length) : Myarray(length), revarray(length), averarry(length){
    ;
}

Nawarry::Nawarry(const Myarray &myarray) : Myarray(myarray), revarray(myarray), averarry(myarray){
    ;
}

Nawarry::~Nawarry() {
    ;
}

void Nawarry::input() {
    this->Myarray::input();
}