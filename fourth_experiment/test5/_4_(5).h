//
// Created by _lian on 2017/3/22.
//

#ifndef TEST5_4_5_H
#define TEST5_4_5_H

#include <vector>
#include <iostream>
class String{
private:
    char* string;
    static int count;
public:
    String();
    String(char* string);
    String(const String& string1);
    ~String();
    String operator+(const char* const string1);
    bool operator<(const char* const string1);
    String &operator=(const String& string1);
    String &operator=(const char * string1);
    friend std::ostream& operator<<(std::ostream& os, const String& string1);
    friend std::istream& operator>>(std::istream& is, String& string1);
    String operator()(int begin, int end);
};
#endif //TEST5_4_5_H
