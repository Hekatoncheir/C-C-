//
//  main.c
//  liang18.c
//
//  Created by OurEDA on 16/10/16.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
void copy_arr (double ar[], double br[], int n)
{
    int m;
    for (m=0;m<n;m++)
        br[m] = ar[m];
}
void copy_ptr (double *pa, double *pb, int n)
{
    int m;
    for (m=0;m<n;m++)
    {
        *pb = *pa;
        pb++;
        pa++;
    }
}
int main ()
{
    int a, n;
    double do1 [5] = {1.2,1.3,1.4,1.5,1.36};
    double do2 [5];
    double do3 [5];
    copy_arr (do1,do2,5);
    copy_ptr (do1,do3,5);
    for (a=0,n=5;a<n;a++)
        printf("%lf ",do2[a]);
    putchar(10);
    for (a=0,n=5;a<n;a++)
        printf("%lf ",do3[a]);
}