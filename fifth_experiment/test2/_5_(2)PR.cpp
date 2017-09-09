//
// Created by _lian on 2017/3/28.
//

#include "_5_(2).h"
#include <iostream>
#include <cstring>
using namespace std;

String::String() {
    this->length = 4;
    this->array = new char [this->length+1];
    this->array[0] = '\0';
}
String::String(const char *string) {
    delete[](this->array);
    this->length = strlen(string);
    this->array = new char [this->length+1];
    strcpy(this->array, string);
}

String::String(const String &string) {
    delete[](this->array);
    this->length = string.length;
    this->array = new char [this->length+1];
    strcpy(this->array, string.array);
}

String::~String() {
    delete[](this->array);
}

String& String::operator=(String &string) {
    if (this == &string)
        return *this;
    delete[](this->array);
    this->length = string.length;
    this->array = new char [this->length+1];
    strcpy(this->array, string.array);
    return *this;
}

String& String::operator=(char *string) {
    delete[](this->array);
    this->length = strlen(string);
    this->array = new char [this->length+1];
    strcpy(this->array, string);
    return *this;
}

ostream& operator<<(ostream &os, const String &string) {
    os << string.array;
    return os;
}

istream& operator>>(istream &is, String &string) {
    char temp[80];
    is.get(temp, 80);
    if (is)
        string = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

edit_string::edit_string() : String(){
    this->ptr = nullptr;
}

edit_string::edit_string(const char *string) : String(string){
    this->ptr = nullptr;
}

edit_string::edit_string(const String &string) : String(string){
    this->ptr = nullptr;
}

edit_string::edit_string(const edit_string& editString) : String(editString){
    this->ptr = nullptr;
}

edit_string::~edit_string() {
    ;
}

char* edit_string::move() {
    int n = -1;
    cout << this->getarray() << endl;
    while (n<0 || n>this->getlength()) {
        cout << "Please enter where character you want to change: ";
        cin >> n;
    }
    this->ptr = this->getarray()+n-1;
    return ptr;
}

void edit_string::show() {
    char* temp = this->getarray();
    for (int i=0;i<this->getlength();i++)
    {
        if (&temp[i] == this->ptr)
            cout << "|" << temp[i];
        else
            cout << temp[i];
    }
    cout << endl;
}

void edit_string::add(char* const ptr, char ch) {
    char* temp = this->getarray();
    char a[this->getlength()+2];
    a[0] = ch;
    strcpy(a+1, ptr);
    strcpy(ptr, a);
    this->ptr++;
    delete[](a);
}

void edit_string::del(char *const ptr) {
    strcpy(ptr, ptr+1);
}

void edit_string::rep(char *const ptr, char ch) {
    *ptr = ch;
}