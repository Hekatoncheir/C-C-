//
//  main.c
//  liang31.c
//
//  Created by OurEDA on 16/11/3.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct MON {
    char mon[10];
    char mmon[4];
    int days;
    int n;
};
int main ()
{
    int n, m, day=0;
    char mo[10];
    struct MON liang[12] = {
        {"January", "jan", 31, 1},
        {"February", "feb", 28, 2},
        {"March", "feb", 31, 3},
        {"April", "apr", 30, 4},
        {"May", "may", 31, 3},
        {"June", "jun", 30, 6},
        {"July", "jul", 31, 7},
        {"August", "aug", 31, 8},
        {"September", "sep", 30, 9},
        {"October", "oct", 31, 10},
        {"November", "nov", 30, 11},
        {"December", "dec", 31, 12}
    };
    printf("Please enter the day:");
    scanf("%d",&n);
    getchar();
    while (n<1 || n>31)
    {
        printf("Please enter another number");
        scanf("%d",&n);
        getchar();
    }
    printf("Pleaase enter the month:");
    gets(mo);
    mo[0] = toupper(mo[0]);
    for (m=0;m<12;m++)
    {
        if ((strstr(liang[m].mon, mo)) == NULL){
            day = day + liang[m].days;
            continue;
        }
        else{
            day = day + n;
            break;
        }
    }
    printf("%d",day);
    return 0;
}