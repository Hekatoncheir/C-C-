//
//  main.c
//  liang16.c
//
//  Created by OurEDA on 16/10/14.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
double power (double n, int p);
double power (double n, int p)//循环
{
    double pow = 1,a;
    int i = 1;
    if (n == 0)
        pow = 0;
        else if (n>0 && p>0)
        {
            for (i=1;i<=p;i++)
                pow *= n;
        }
    else if (n>0 && p<0)
    {
        for (i=1;i<=p;i++)
            a *= n;
        pow = 1/a;
    }
    else if (p == 0)
        pow = 1;
        return pow;
}//
double powerd (double n, int p)//递归
{
    double pow = 1;
    int i;
    if (n == 0)
        pow = 0;
    else if (n>0 && p>0)
    {
        for (i=1;i<=p;i++)
            pow *= n;
    }
    else if (n>0 && p<0)
    {
        pow = 1/powerd (n,-p);
    }
    else if (p==0)
        pow = 1;
    return pow;
}
int main ()
{
    int p;
    double n, pow;
    scanf("%lf %d", &n, &p);
    while (getchar() != '\n')
        continue;
    pow = powerd(n,p);
    printf("%.2lf",pow);
}
