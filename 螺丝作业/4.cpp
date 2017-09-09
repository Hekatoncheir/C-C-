#include<iostream>
using namespace std;
class Carlo
{
    private:
    int weight;
    static int totalweight;
    public:
    Carlo(int a);
    static int gettotalweight();
   void sell();

};
int Carlo::totalweight=0;
Carlo::Carlo(int a)
{
    this->weight=a;
    totalweight+=a;

}
void Carlo::sell()
 {
        totalweight-=this->weight;
        this->weight=0;

    }
int Carlo::gettotalweight()
{
    return totalweight;
}
int main()
{
    Carlo c1(300);
    cout<<Carlo::gettotalweight()<<endl;
    c1.sell();
    cout<<Carlo::gettotalweight();


}
