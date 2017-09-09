//
//  main.c
//  liang15.c
//
//  Created by OurEDA on 16/10/13.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
void head (void);
int wen (int min, int max);
void head (void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files 2) move files\n3) remove files 4) quit\n");
    printf("Enter the number of your choice\n");
}
int wen (int min, int max)
{
    int num;
    scanf("%d", &num);
    while (getchar() != '\n')
        continue;
    while (num < min || num > max)
    {
        head();
        scanf("%d", &num);
        while (getchar() != '\n')
            continue;
    }
    return num;
}
int main ()
{
    head();
    int a=1, b=4, liang;
    liang = wen (a,b);
    switch (liang)
    {
        case 1:
            printf("ha");
            break;
        case 2:
            printf("haha");
            break;
        case 3:
            printf("hahaha");
            break;
        case 4:
            printf("hahahaha");
            break;
    }
    return 0;
}