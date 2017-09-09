//
// Created by _lian on 2017/3/22.
//

#ifndef TEST6_4_6_H
#define TEST6_4_6_H
struct Node{
    int coe;//系数
    int exp;//指数
    Node * link;
};

class Poly{
private:
    Node* date;
public:
    Poly();
    ~Poly();
    Poly(const Poly& poly);
    Poly Create();
    Poly operator+(const Poly& poly);
    Poly operator-(const Poly& poly);
    Poly operator*(const Poly& poly);
    double Operator(double num);
};
#endif //TEST6_4_6_H
