//
//  main.c
//  liang.c
//
//  Created by OurEDA on 16/10/5.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#define max 40
#define PLUS 1.5
#define ONE 300*0.15
#define TWO 150*0.2
int main ()
{
    printf("How much time you work a weak?\n");
    int time, a;
    double money, SALARY;
    scanf("%d",&time);
    printf("Ok Next! what is you salary?\n");
    printf("1) $8.75/hr  2) $9.33/hr\n""3) $10.00/hr  4) $11.20/hr\n"" 5) quit\n");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
            SALARY = 8.75;
            break;
        case 2:
            SALARY = 9.33;
            break;
        case 3:
            SALARY = 10.00;
            break;
        case 4:
            SALARY = 11.20;
            break;
        case 5:
            printf("So,what is you salary?\n");
            scanf("%lf",&SALARY);
    }
    if (time <= max)
    money = time*SALARY;
    else
        money = (max+(time-max)*1.5)*SALARY;
    if (money>=0 && money<=300)
        printf("You will get $%.2lf in this week\n",money-ONE);
    if (money>300 && money<=450)
        printf("You will get $%.2lf in this week\n",(money-ONE)-(money-300)*0.15);
    if (money>450)
        printf("you will get $%.2lf in this week\n", (money-ONE-TWO)-(money-450)*0.25);
    return main();
}