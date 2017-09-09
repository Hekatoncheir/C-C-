//
// Created by _lian on 2017/3/20.
//

#include "_3_(5).h"
#include <iostream>

int Node::count = 0;

Node::Node(double number) {
    this->number = number;
    this->count++;
}

Node::~Node() {
    this->count--;
}

int Node::get(const Node &node) {
    return node.count;
}
