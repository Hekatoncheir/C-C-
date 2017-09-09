//
// Created by _lian on 2017/3/21.
//

#ifndef TEST7_3_9_H
#define TEST7_3_9_H

#include <vector>
using std::vector;
class Polynomial{
private:
    vector<double> polynomial;
    int heightest;
public:
    void SetPolynomial ();
    Polynomial();
    ~Polynomial();
    double Operator(double x=1);
    friend Polynomial operator+(const Polynomial& pal1, const Polynomial& pal2);
    friend Polynomial operator-(const Polynomial& pal1, const Polynomial& pal2);
    friend Polynomial operator*(const Polynomial& pal1, const Polynomial& pal2);
    friend std::ostream& operator<<(std::ostream& os, const Polynomial& polynomial1);
};
#endif //TEST7_3_9_H
