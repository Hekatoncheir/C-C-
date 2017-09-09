//
// Created by _lian on 2017/3/28.
//

#ifndef TEST2_5_2_H
#define TEST2_5_2_H

#include <iostream>
using std::ostream;
using std::istream;
class String{
private:
    int length;
    char* array;
public:
    String();
    String(const char * string);
    String(const String& string);
    virtual ~String();
    int getlength() {return this->length;}
    void setlength(int length) {this->length = length;}
    char* getarray() {return this->array;}
    String &operator=(String& string);
    String &operator=(char * string);
    char &operator[](int i) {return this->array[i];}
    friend ostream &operator<<(ostream& os, const String& string);
    friend istream &operator>>(istream& is, String& string);
};

class edit_string : public String{
private:
    char* ptr;
public:
    edit_string();
    edit_string(const edit_string& editString);
    edit_string(const String& string);
    edit_string(const char * string);
    virtual ~edit_string();
    void add(char* const ptr, char ch);
    void del(char* const ptr);
    void rep(char* const ptr, char ch);
    char* move();
    void show();
};
#endif //TEST2_5_2_H
