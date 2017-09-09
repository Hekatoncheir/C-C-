#include <iostream>
#include "function1.h"
using namespace std;
int main() {
    int diff_oper;
    diff_oper = Interface();
    if (diff_oper == 0)
        return 0;
    question(diff_oper);
}