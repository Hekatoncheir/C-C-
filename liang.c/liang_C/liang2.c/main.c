//
//  main.c
//  liang2.c
//
//  Created by OurEDA on 16/10/5.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
int main ()
{
    int a, b, c;
    scanf("%d",&a);
    for (b=1;b<=a;b++)
    {
        for (c=2;c<=b;c++)
        {
            if (b%c==0 && b!=c)
                break;
            else if (b%c==0 && b==c)
                printf(" %d", b);
        }
    }    return  0;
}