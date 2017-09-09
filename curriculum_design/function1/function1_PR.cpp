//
// Created by liang on 2017/6/26.
//
#include "function1.h"
#include <ctime>
#include <iostream>
#define easy_min 1
#define easy_max 10
#define general_max 50
#define difficult_max 100
using namespace std;

int Interface ()
{
    char ch;
    int diff, ope;
    cout << "Do you want to start this test?" << endl << "[yes|no] :";
    cin >> ch;
    cin.sync();
    if (ch == 'y' || ch == 'Y') {
        cout << "Please choose the degree of difficulty" << endl << "1) easy    2)general   3)difficult" << endl;
        cin >> diff;
        while (diff != 1 && diff != 2 && diff != 3) {
            cout << "Please choose the degree of difficulty" << endl << "1)easy    2)general   3)difficult" << endl;
            cin >> diff;
        }
        cout << "Please choose the operate mode" << endl << "1)+   2)-  3)*    4)/" << endl;
        cin >> ope;
        while (ope != 1 && ope != 2 && ope != 3 && ope != 4) {
            cout << "Please choose the operate mode" << endl << "1)+   2)-  3)*    4)/" << endl;
            cin >> ope;
        }
        return diff*10+ope;
    }
    else {
        cout << "GoodBye!";
        return 0;
    }
}

void question(int diff_ope)
{
    int score=0, min, max;
    char opera;
    double start, stop, Time, out=0, m, n;
    switch (diff_ope/10) {
        case 1:
            min = easy_min;
            max = easy_max;
            break;
        case 2:
            min = easy_max;
            max = general_max;
            break;
        case 3:
            min = general_max;
            max = difficult_max;
            break;
    }
    switch (diff_ope%10) {
        case 1:
            opera = '+';
            break;
        case 2:
            opera = '-';
            break;
        case 3:
            opera = '*';
            break;
        case 4:
            opera = '/';
            break;
    }
    start = clock();
    for (int i=0;i<5;i++)
    {
        m = rand()%max+min;
        n = rand()%max+min;
        if (opera != '/')
            cout << m << opera << n << "=";
        else
            cout << "Please retain a decimal" << endl << m << opera << n << "=";
        cin >> out;
        switch (diff_ope%10) {
            case 1:
                if (out == m+n)
                    score++;
                break;
            case 2:
                if (out == m-n)
                    score++;
                break;
            case 3:
                if (out == m*n)
                    score++;
                break;
            case 4:
                if (out-m/n >= -0.1 && out-m/n <=0);
                    score++;
                break;
        }
    }
    stop = clock();
    Time = ((double)(stop-start))/CLK_TCK;
    if (Time < 100)
        cout << "Your cost " << Time << "s to answer 10 question" << endl << "Your score is: " << score*10 << endl;
    else
        cout << "Your over the time";
}


