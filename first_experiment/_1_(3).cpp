//
// Created by _lian on 2017/3/15.
//

#include <iostream>
int main ()
{
    using namespace std;
    const int two = 2, five = 5;
    const int num = 100;
    int flag = 0;
    for (int i=0;i<=100;i++)
    {
        for (int j=0;j<=50;j++)
        {
            for (int m=0;m<=20;m++)
            {
                if (i+two*j+five*m == num)
                    flag++;
            }
        }
    }
    cout << "We have " << flag << " Ways to do it!";
    return 0;
}