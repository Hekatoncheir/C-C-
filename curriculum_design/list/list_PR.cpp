//
// Created by liang on 2017/6/28.
//
#include "list.h"
#include <iostream>
using namespace std;
List::List(int num) {
    this->head = new Node;
    this->head->num = num;
    this->head->next = nullptr;
}

List::List(const List &list) {
    Node* prc = list.head;
    this->head = new Node;
    this->head->num = prc->num;
    this->head->next = nullptr;
    prc = prc->next;
    while (prc)
    {
        this->push_back(prc->num);
        prc = prc->next;
    }
}

//List::~List() {
//    Node* temp;
//    while (this->head) {
//        temp = this->head;
//        this->head = this->head->next;
//        delete(temp);
//    }
//}

Node* List::begin() {
    return head;
}

Node* List::end() {
    Node* prc = this->head;
    while (prc->next)
        prc = prc->next;
    return prc;
}

void List::push_back(int num) {
    Node* prc = head;
    while (prc->next)
        prc = prc->next;
    Node* temp = new Node;
    temp->num = num;
    prc->next = temp;
    temp->next = nullptr;
}

void List::push_head(int num) {
    Node* prc = head;
    Node* temp = new Node;
    temp->num = num;
    head = temp;
    head->next = prc;
}

void List::insert(int num) {
    Node* prd = head;
    Node* prc = head;
    while (prd->num <= num) {
        prc = prd;
        prd = prd->next;
    }
    static Node* temp = new Node;
    temp->num = num;
    prc->next = temp;
    temp->next = prd;
}

void List::erase(Node *node) {
    Node* prc = head;
    Node* prd = head;
    while (&(*prc) != &(*node) && prc) {
        prd = prc;
        prc = prc->next;
    }
    if (prc != nullptr)
        prd->next = node->next;
    delete(prc);
}

void List::erase(int n) {
    Node* temp = (*this)[n];
    List::erase(temp);
}

Node* List::operator[](int n) {
    int number=0;
    Node* prd = head;
    while (prd)
    {
        number++;
        prd = prd->next;
    }
    if (n>=number || n<0)
        return nullptr;
    else
    {
        Node* prc = head;
        while (--n>=0)
            prc = prc->next;
        return prc;
    }
}

Node** List::find(int n) {
    Node* prc = head;
    Node* prd = head;
    int flag=0, number=0;
    while (prd)
    {
        number++;
        prd = prd->next;
    }
    Node* temp[number];
    while (prc)
    {
        if (prc->num != n)
            prc = prc->next;
        else
        {
            temp[flag] = prc;
            prc = prc->next;
            flag++;
        }
    }
    Node* tem[flag+1]={nullptr};
    for (int i=0;i<flag;i++) {
        tem[i] = new Node;
        tem[i] = temp[i];
    }
    return tem;
}

void List::ierase(int n) {
    Node** temp = find(n);
    while (*temp)
    {
        erase(*temp);
        (*temp)++;
    }
}

double List::size() {
    double sum=0;
    Node* prc = head;
    while (prc)
    {
        sum += sizeof(prc);
        prc=prc->next;
    }
    return sum;
}

void List::print() {
    Node* prc = head;
    while (prc) {
        cout << prc->num << " ";
        prc = prc->next;
    }
    cout << endl;
}

List &marge(List list_a, List list_b) {
    list_a.end()->next = list_b.begin();
    List* temp = new List;
    *temp = list_a;
    return *temp;
}

void List::marge(List& list_a) {
   this->end()->next = list_a.head;
}

void List::rebegin() {
    int number = 0;
    Node* temp = head;
    Node* prd = head;
    while (temp->next) {
        number++;
        temp = temp->next;
    }
    head = temp;
    for (int i=0;i<number;i++) {
        Node* prc = prd;
        while (prc->next != temp)
            prc = prc->next;
        prc->next = nullptr;
        temp->next = prc;
        temp = temp->next;
    }
}