//
// Created by _lian on 2017/3/20.
//

#ifndef TEST4_3_5_H
#define TEST4_3_5_H
class Node{
private:
    double number;
    static int count;
public:
    Node (double number=0);
    ~Node();
    static int get(const Node& node);
};
#endif //TEST4_3_5_H
