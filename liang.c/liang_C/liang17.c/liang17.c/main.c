//
//  main.c
//  liang17.c
//
//  Created by OurEDA on 16/10/15.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
void to_binary (unsigned long n,int m);
void to_binary (unsigned long n,int m)
{
    int r;
    r = n%m;
    if (n>=m)
        to_binary(n/m,m);
    putchar ('0' +r);
    return;
}
int main ()
{
    unsigned long n;
    int m;
    while (scanf("%lu %d",&n, &m) == 2)
    {
        if (m<2 && m>10)
        {
            while (getchar() != '\n')
                continue;
            printf("2<m<10,please give the right number");
            continue;
        }
        else
         to_binary(n,m);
    }
    return 0;
}