//
//  main.c
//  liang9.c
//
//  Created by OurEDA on 16/10/9.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
    srand((unsigned)time(NULL));
    for (int i=0; i<9; i++)
    {
        int a = rand()%(17)+1;
        switch(a)
        {
        case 1:
            printf("李辉");
            break;
        case 2:
            printf("陈曦");
            break;
        case 3:
            printf("常钰");
            break;
        case 4:
            printf("梁文翔");
            break;
        case 5:
            printf("周翔");
            break;
        case 6:
            printf("杨泽民");
            break;
        case 7:
            printf("冯卓");
            break;
        case 8:
            printf("季良元");
            break;
        case 9:
            printf("姜禹");
            break;
        case 10:
            printf("孔子涵");
            break;
        case 11:
            printf("刘铁");
            break;
        case 12:
            printf("马照锋");
            break;
        case 13:
            printf("孙立明");
            break;
        case 14:
            printf("田冠璞");
            break;
        case 15:
            printf("陶玉霖");
            break;
        case 16:
            printf("杨逐浪");
            break;
        case 17:
            printf("曾李栋");
            break;
    }
        putchar(10);
    }
    return 0;
}