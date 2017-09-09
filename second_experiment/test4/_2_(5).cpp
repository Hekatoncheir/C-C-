#include <iostream>
class init {
private:
    int* pint;
    int m;
public:
    init (int j=10);
    void set (int n, int number);
    void show ();
    ~init();
};
using namespace std;
int main() {
    int m = 0;
    cout << "How many int you want to create?" << endl;
    cin >> m;
    init a = init (m);
    a.set(21, 56);
    a.show();
    return 0;
}

init::init(int j) {
    pint = new int [m];
    m = j;
    int i = 0;
    while (i<m)
    {
        pint[i] = 0;
        i++;
    }
}

void init::set(int n, int number) {
    while (n > m)
    {
        cout << "Please enter the digit less than:" << m << endl;
        cin >> n;
    }
    pint[n-1] = number;
}

void init::show() {
    for (int i=0;i<m;i++)
        cout << pint[i] << " ";
}

init::~init() {
    delete[](pint);
}
