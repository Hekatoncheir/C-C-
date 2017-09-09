//
// Created by _lian on 2017/3/28.
//

#ifndef TEST1_5_1_H
#define TEST1_5_1_H
class Myarray{
private:
    int* alist;
    int length;
public:
    Myarray(int length=0);
    Myarray(const Myarray& myarray);
    virtual ~Myarray();
    virtual void input();
    void display();
    int* getalist() {return this->alist;}
    void setalist(int* alist1) {this->alist = alist1;}
    int getlength() {return this->length;}
    void setlength(int length1) {this->length = length1;}
};

class averarry : public virtual Myarray{
public:
    averarry(int length=0);
    averarry(const Myarray& myarray);
    virtual ~averarry();
    double summation();
};

class revarray : public virtual Myarray{
public:
    revarray(int length=0);
    revarray(const Myarray& myarray);
    virtual ~revarray();
    virtual void input();
};

class Nawarry : public averarry, public revarray{
public:
    Nawarry(int length=0);
    Nawarry(const Myarray& myarray);
    virtual ~Nawarry();
    virtual void input();
};
#endif //TEST1_5_1_H
