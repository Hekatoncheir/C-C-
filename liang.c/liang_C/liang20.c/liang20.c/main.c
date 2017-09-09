//
//  main.c
//  liang20.c
//
//  Created by OurEDA on 16/10/17.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
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
    int  a, b, c;
    double nd[5][2] = {{1.2,2.3},{3.4,5.2},{6.7,4.1},{6.8,1.9},{9.4,7.6}};
    double ndt[5][2];
    for (a=0;a<5;a++)
    {
    copy_ptr(nd[a],ndt[a],2);
    }
    double (*pd)[2];
    pd = ndt;
    for (b=0;b<5;b++)
    {
        for (c=0;c<2;c++)
            printf(" %.2lf",*(*(pd+b)+c));
    }
    return 0;
}