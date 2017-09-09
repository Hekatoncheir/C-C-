//
// Created by _lian on 2017/3/20.
//

#ifndef TEST6_3_8_H
#define TEST6_3_8_H
class lined_list{
private:
    int number;
    static int count;
public:
    lined_list* next;
    lined_list (int number=0);
    //lined_list (const lined_list& linedList);
    ~lined_list();
    friend lined_list* Create (lined_list* head, lined_list* prd);

    friend lined_list* Delete (lined_list* head, lined_list* pra);
    int getnumber ();
    int getcount ();
};
#endif //TEST6_3_8_H
