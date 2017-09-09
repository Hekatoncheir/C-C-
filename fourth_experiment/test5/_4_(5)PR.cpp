//
// Created by _lian on 2017/3/22.
//

#include "_4_(5).h"
#include <iostream>
#include <cstring>
using namespace std;
int String::count = 0;

String::String() {
    this->string = new char[1];
    this->string[0] = '\0';
}

String::String(char* string) {
    this->string = new char[strlen(string) + 1];
    strcpy(this->string, string);
    this->count++;
}

String::String(const String &string1) {
    this->string = new char[strlen(string1.string) + 1];
    strcpy(this->string, string1.string);
    count++;
}

String::~String() {
    delete[](this->string);
    this->count--;
}

String String::operator+(const char* const string1) {
    return String(strcat(this->string, string1));
}

String& String::operator=(const String &string1) {
    if (this == &string1)
        return *this;
    delete[](this->string);
    this->string = new char[strlen(string1.string)+1];
    strcpy(this->string, string1.string);
}

String& String::operator=(const char *string1) {
    delete[](this->string);
    this->string = new char[strlen(string1) + 1];
    strcpy(this->string, string1);
    return *this;
}

bool String::operator<(const char *const string1) {
    if (stricmp(this->string, string1) < 0)
        return true;
    else
        return false;
}

String String::operator()(int begin, int end) {
    int a = strlen(this->string);
    if (begin<0 || begin>a || end>a || begin>end || end-begin>a) {
        cout << "WARING!!!" << endl;
        cout << "We will return the all string!" << endl;
        return *this;
    }
    else
    {
        char* head = this->string+begin;
        String temp;
        strncpy(temp.string, head, end-begin);
    }
}

std::istream& operator>>(std::istream & is, String& string1) {
    char temp[80];
    is.get(temp, 80);
    if (is)
        string1 = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

std::ostream& operator<<(std::ostream &os, const String &string1) {
    os << string1.string;
    return os;
}