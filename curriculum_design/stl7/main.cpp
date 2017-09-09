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
    cout << "你要订购多少商品" <<endl;
    cin >> n;
    //测试 Cart::add方法
    cout << "测试 Cart::add方法---------------" << endl;
    for(i = 0;i<n;i++)
    {
        cout << "请输入第"<< i+1 <<"个订单信息"<<endl;
        cin >> gid >> gnum;
        c.add(new Order(gid,gnum));
    }
    //测试Cart::print方法
    cout << "你的订单信息如下"<<endl;
    c.print();
    //测试Cart::del方法
    cout <<"测试Cart::del方法, 请输入要删除的订单的产品编号"<<endl;
    cin >> gid;
    c.del(gid);
    cout <<"现在你的订单信息如下"<<endl;
    c.print();

}