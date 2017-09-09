//
// Created by _lian on 2017/3/21.
//

#ifndef TEST3_4_3_H
#define TEST3_4_3_H
#define MAX 100
#include <vector>
class Set{
private:
    std::vector<int> set;
    int num;
    static int n;
public:
    Set();
    ~Set();
    Set(const Set& set1);
    void Add(int number);
    void Del(int number);
    Set operator+(const Set& set);
    Set operator*(const Set& set);
    void operator=(const Set& set);
    void operator-=(const Set& set);
};
#endif //TEST3_4_3_H
