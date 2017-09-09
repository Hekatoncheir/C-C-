//
// Created by _lian on 2017/3/14.
//

#ifndef TEST5_2_6_H
#define TEST5_2_6_H
class String
{
public:
    String(const char *str = NULL);  //普通构造函数
    String(const String &other);     //拷贝构造函数
    ~ String();                   //析构函数
    void show();
private:
    char *m_data; // 用于保存字符串
};
#endif //TEST5_2_6_H
