#include <iostream>
#include <list>
using namespace std;

class Order
{
public:
    Order(int gid, int gnum);
    void print();
    bool operator == (int gid);
private:
    int goods_id;
    int goods_number;
};

class Cart
{
public:
    void add(Order* order);
    void print();
    bool del(int gid);
private:
    list<Order*> l_goods;
};

Order::Order(int gid, int gnum) {
    this->goods_id = gid;
    this->goods_number = gnum;
}

void Order::print() {
    cout << goods_id << " : " << goods_number << endl;
}

bool Order::operator==(int gid) {
    return this->goods_id == gid;
}

void Cart::add(Order *order) {
    this->l_goods.push_back(order);
}

void Cart::print() {
    list<Order*>::iterator i=l_goods.begin();
    while (i!=l_goods.end())
        (*i++)->print();
}

bool Cart::del(int gid) {
    list<Order*>::iterator i=l_goods.begin();
    while (i!=l_goods.end()) {
        if(*(*i) == gid) {
            l_goods.remove(*i);
            return true;
        }
         i++;
    }
    return false;
}

int main ()
{
    Cart c;
    int n,i;
    int gid,gnum;
    cout << "��Ҫ����������Ʒ" <<endl;
    cin >> n;
    //���� Cart::add����
    cout << "���� Cart::add����---------------" << endl;
    for(i = 0;i<n;i++)
    {
        cout << "�������"<< i+1 <<"��������Ϣ"<<endl;
        cin >> gid >> gnum;
        c.add(new Order(gid,gnum));
    }
    //����Cart::print����
    cout << "��Ķ�����Ϣ����"<<endl;
    c.print();
    //����Cart::del����
    cout <<"����Cart::del����, ������Ҫɾ���Ķ����Ĳ�Ʒ���"<<endl;
    cin >> gid;
    c.del(gid);
    cout <<"������Ķ�����Ϣ����"<<endl;
    c.print();

}