//
// Created by liang on 2017/4/17.
//

#include "_7_(2).h"
template <class Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0){
    items = new Type [stacksize];
}

template <class Type>
Stack<Type>::Stack(const Stack &st) {
    stacksize = st.stacksize;
    top = st.top;
    items = new Type [stacksize];
    for (int i=0;i < top; i++)
        items[i] = st.items[i];
}

template  <class Type>
bool Stack<Type>::push(const Type &item) {
    if (top < stacksize)
    {
        item[top++] = item;
        return true;
    }
    else
        return false;
}

template  <class Type>
bool Stack<Type>::pop(Type &item) {
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}

template <class Type>
Stack& Stack<Type>::operator=(const Stack &st) {
    if (this == &st)
        return *this;
    delete [] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new Type [stacksize];
    for (int i=0;i<top;i++)
        items[i] = st.items[i];
    return *this;
}