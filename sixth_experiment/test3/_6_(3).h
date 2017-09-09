//
// Created by _lian on 2017/4/1.
//

#ifndef TEST3_6_3_H
#define TEST3_6_3_H
struct Node{
    int num;
    Node* next;
};
class List{
private:
    Node* head;
public:
    List(int n=0);
    virtual ~List();
    virtual void push_head(int num=0);
    virtual void push_back(int num=0);
    Node* begin();
    Node* end();
    virtual void insert(Node* node, int num, int n=0);
    virtual void erase(Node* node);
    double size();
    Node* operator[](int n);
    Node* Gethead();
    void Sethead(Node* node);
};

class Set : public List{
private:
    int number;
public:
    Set(int n=0);
    virtual ~Set();
    void show();
    Node* find(int num);
    virtual void push_head(int num=0);
    virtual void push_back(int num=0);
    virtual void insert(Node* node, int num, int n=0);
    virtual void erase(Node* node);
};
#endif //TEST3_6_3_H
