//
// Created by liang on 2017/4/17.
//

#ifndef TEST2_7_2_H
#define TEST2_7_2_H
template <class Type>
class Stack
{
private:
    enum {SIZE = 10};
    int stacksize;
    Type * items;
    int top;
public:
    explicit Stack(int ss = SIZE);
    Stack(const Stack & st);
    ~Stack() {delete [] items;}
    bool isempty() { return top == 0;}
    bool isfull() { return top == stacksize;}
    bool push(const Type & item);
    bool pop(Type & item);
    Stack &operator=(const Stack & st);
};
#endif //TEST2_7_2_H
