#include <iostream>
using namespace std;
class counter {
private:
    int num;
public:
    counter ();
    void add();
    void del();
    void show();
};

int main ()
{
    counter a;
    a.add();
    a.add();
    a.del();
    a.show();
    return 0;
}

counter::counter() {
    num = 0;
}

void counter::add() {
    num++;
}
void counter::del() {
    num--;
}
void counter::show() {
    cout << num;
}



