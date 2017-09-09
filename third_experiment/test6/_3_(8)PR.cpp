//
// Created by _lian on 2017/3/20.
//

#include "_3_(8).h"
#include <iostream>
int lined_list::count = 0;

lined_list::lined_list(int number) {
    this->number = number;
    this->next = NULL;
    this->count++;
}

//lined_list::lined_list(const lined_list &linedList) {
//    this->number = linedList.number;
//    this->next = linedList.next;
//    this->count++;
//}

lined_list::~lined_list() {
    ;
}

lined_list* Create(lined_list* head, lined_list* prd) {
    prd->next=head;
    std::cout << "point:" << head->count << " " << prd->getnumber() << std::endl;
    return prd;
}

lined_list* Delete(lined_list *head, lined_list* pra) {
    head->count--;
    std::cout << "We delete the " << head->count << " point" << std::endl;
    return pra->next;
}

int lined_list::getnumber() {
    if (this->count == 0)
        std::cout << "Waring!" << std::endl;
    else
        return this->number;
}

int lined_list::getcount() {
    return this->count;
}
