//
//  main.c
//  liang3.c
//
//  Created by OurEDA on 16/10/5.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#define bachelordom 17850
#define household 23900
#define married 29750
#define divorce 14875
int main ()
{
    int income, a, b;
    float tax;
    printf("What is you income?\n");
    scanf("%d",&income);
    printf("What is you family status:\n");
    printf("1.bachelordom  2.household\n""3.married  4.divorce\n");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
            b = 17850;
        case 2:
            b = 23900;
        case 3:
            b = 29750;
        case 4:
            b= 14875;
    }
    if (income<=b)
        tax = income*0.15;
    else
        tax = b*0.15+(income-b)*0.28;
    printf("You will pay %.2f this year.\n",tax);
    return main();
}