//
// Created by _lian on 2017/3/13.
//

#ifndef TEST1_2_1_H
#define TEST1_2_1_H
class Time {
private:
    int hou;
    int min;
    int sec;
public:
    Time (int h=0, int m=0, int s=0);
    ~Time();
    void sethour(int h);
    void setminute(int m);
    void setsecond(int s);
    void show ();
    void setTime (int h=0, int m=0, int s=0);
    void tick ();
};
#endif //TEST1_2_1_H
