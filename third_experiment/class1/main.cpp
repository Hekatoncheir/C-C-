#include <iostream>
#include <vector>
using namespace std;
class Student {
private:
    static int count;
};
class Assistant{
private:
    vector<Student> student;
    static int count;
};
class Teacher{
private:
    vector<Assistant> assistant;
    static int count;
};
int main(){
    return 0;
}
