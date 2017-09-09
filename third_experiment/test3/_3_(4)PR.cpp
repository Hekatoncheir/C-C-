//
// Created by _lian on 2017/3/20.
//

#include "_3_(4).h"
#include <iostream>

double Carlo::all_weight = 0;
double Carlo::all_price = 0;

Carlo::Carlo(double weight, double price) {
    this->weight = weight;
    this->price = price;
    this->all_weight += weight;
    this->all_price += price;
}

Carlo::~Carlo() {
    this->all_weight -= this->weight;
    this->all_price -= this->price;
}

std::ostream& operator<<(std::ostream &os, const Carlo &carlo) {
    os << "AllWeight: " << carlo.all_weight << std::endl << "AllPrice: " << carlo.all_price << std::endl;
    return os;
}
