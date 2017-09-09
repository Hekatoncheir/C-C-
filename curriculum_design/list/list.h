//
// Created by liang on 2017/6/28.
//

#ifndef LIST_LIST_H
#define LIST_LIST_H
struct Node{
    int num;
    Node* next;
};
class List{
private:
    Node* head;
public:
    List(int n=0);
    List(const List& list);
    //~List();
    void push_head(int num=0);
    void push_back(int num=0);
    Node* begin();
    Node* end();
    void insert(int num);
    void erase(Node* node);
    void erase(int n);
    void ierase(int n);
    double size();
    Node* operator[](int n);
    Node** find(int n);
    void print();
    friend List& marge(List list_a, List list_b);
    void marge(List& list_a);
    void rebegin();
};
#endif //LIST_LIST_H
