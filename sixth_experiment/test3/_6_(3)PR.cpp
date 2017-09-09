//
// Created by _lian on 2017/4/1.
//

#include "_6_(3).h"
#include <iostream>
using namespace std;
List::List(int num) {
    this->head = new Node;
    this->head->num = num;
    this->head->next = nullptr;
}

List::~List() {
    Node* temp;
    while (this->head) {
        temp = this->head;
        this->head = this->head->next;
        delete(temp);
    }
}

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
    Node* prc = this->head;
    while (prc->next)
        prc = prc->next;
    static Node* temp = new Node;
    temp->num = num;
    prc->next = temp;
    temp->next = nullptr;
}

void List::push_head(int num) {
    Node* prc = head;
    static Node* temp = new Node;
    temp->num = num;
    head = temp;
    head->next = prc;
}

void List::insert(Node *node, int num, int n) {
    Node* prd = node;
    while (--n>=0)
        prd = prd->next;
    Node* prc = prd->next;
    static Node* temp = new Node;
    temp->num = num;
    prd->next = temp;
    temp->next = prc;
}

void List::erase(Node *node) {
    Node* prc = head;
    Node* prd= nullptr;
    while (&(*prc) != &(*node)) {
        prd = prc;
        prc = prc->next;
    }
    prd->next = node->next;
    delete(node);
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
        return NULL;
    else
    {
        Node* prc = head;
        while (--n>=0)
            prc = prc->next;
        return prc;
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

Node* List::Gethead() {
    return this->head;
}

void List::Sethead(Node* node) {
    this->head = node;
}

Set::Set(int n) : List(n){
    this->number = 1;
}

Set::~Set() {
    ;
}

void Set::push_head(int num) {
    Node* prc = List::Gethead();
    static Node* temp = new Node;
    temp->num = num;
    List::Sethead(temp);
    List::Gethead()->next = prc;
    this->number++;
}

void Set::push_back(int num) {
    Node* prc = List::Gethead();
    while (prc->next)
        prc = prc->next;
    static Node* temp = new Node;
    temp->num = num;
    prc->next = temp;
    temp->next = nullptr;
    this->number++;
}

void Set::insert(Node *node, int num, int n) {
    Node* prd = node;
    while (--n>=0)
        prd = prd->next;
    Node* prc = prd->next;
    static Node* temp = new Node;
    temp->num = num;
    prd->next = temp;
    temp->next = prc;
    this->number++;
}

void Set::erase(Node *node) {
    Node* prc = List::Gethead();
    Node* prd= nullptr;
    while (&(*prc) != &(*node)) {
        prd = prc;
        prc = prc->next;
    }
    prd->next = node->next;
    delete(node);
    this->number--;
}

void Set::show() {
    Node* prc = List::Gethead();
    cout << this->number << " points: ";
    while (prc)
    {
        cout << prc->num << " ";
        prc = prc->next;
    }
}

Node* Set::find(int num) {
    Node* prc = List::Gethead();
    while (prc)
    {
        if (prc->num == num)
            break;
        prc = prc->next;
    }
    return prc;
}