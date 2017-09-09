//
// Created by liang on 2017/7/5.
//


#include <rpc.h>

//长条形
const int A1 = 0;
const int A2 = 7;
//方块
const int B = 1;
//L 形状
const int C11 = 2;
const int C12 = 8;
const int C13 = 9;
const int C14 = 10;
//L 的另一个形状
const int C21 = 3;
const int C22 = 11;
const int C23 = 12;
const int C24 = 13;
//Z 形状
const int D11 = 4;
const int D12 = 14;
//Z 的另一个形状
const int D21 = 5;
const int D22 = 15;

//土字形
const int E31 = 6;
const int E32 = 16;
const int E33 = 17;
const int E34 = 18;


int sharp[19][9] =                  //每个一维数组内有8个点，每两个点是一个 形状的一个小方格，在4*4的表格中
        {
                { 0, 0, 0, 1, 0, 2, 0, 3, FOREGROUND_RED | FOREGROUND_INTENSITY },          //长条形
                { 0, 0, 1, 0, 0, 1, 1, 1, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY },   //方形
                { 0, 0, 0, 1, 1, 1, 2, 1, FOREGROUND_GREEN | FOREGROUND_RED },              //L形
                { 0, 1, 1, 1, 2, 1, 2, 0, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY },  //反L形
                { 0, 0, 1, 0, 1, 1, 2, 1, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY },    //Z形
                { 1, 0, 2, 0, 0, 1, 1, 1, FOREGROUND_GREEN | FOREGROUND_INTENSITY },            //反Z形
                { 0, 0, 0, 1, 0, 2, 1, 1, FOREGROUND_BLUE | FOREGROUND_INTENSITY },     //土形
                //下面是上面形状的变换
                { 0, 0, 1, 0, 2, 0, 3, 0, FOREGROUND_RED | FOREGROUND_INTENSITY },
                { 1, 0, 1, 1, 1, 2, 0, 2, FOREGROUND_GREEN | FOREGROUND_RED },
                { 0, 0, 1, 0, 2, 0, 2, 1, FOREGROUND_GREEN | FOREGROUND_RED },
                { 0, 0, 1, 0, 0, 1, 0, 2, FOREGROUND_GREEN | FOREGROUND_RED },
                { 0, 0, 1, 0, 1, 1, 1, 2, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY },
                { 0, 0, 1, 0, 2, 0, 0, 1, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY },
                { 0, 0, 0, 1, 0, 2, 1, 2, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY },
                { 1, 0, 0, 1, 1, 1, 0, 2, FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY },
                { 0, 0, 0, 1, 1, 1, 1, 2, FOREGROUND_GREEN | FOREGROUND_INTENSITY },
                { 0, 0, 1, 0, 2, 0, 1, 1, FOREGROUND_BLUE | FOREGROUND_INTENSITY },
                { 0, 1, 1, 0, 1, 1, 1, 2, FOREGROUND_BLUE | FOREGROUND_INTENSITY },
                { 1, 0, 0, 1, 1, 1, 2, 1, FOREGROUND_BLUE | FOREGROUND_INTENSITY }
        };


int high[19] = { 4, 2, 2, 2, 2, 2, 3, 1, 3, 2, 3, 3, 2, 3, 3, 3, 2, 3, 2 };