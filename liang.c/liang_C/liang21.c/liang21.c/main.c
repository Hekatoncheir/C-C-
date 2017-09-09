//
//  main.c
//  liang21.c
//
//  Created by OurEDA on 16/10/17.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
void put (int N, int M, double ar[N][M])
{
    int n, m;
    for (n=0;n<N;n++)
    {
        for (m=0;m<M;m++)
            printf(" %.2lf",*(*(ar+n)+m));
    }
}
void fan (double *ps, int clos)
{
    int c;
    for (c=0;c<clos;c++)
        *(ps+c) = *(ps+c) * *(ps+c);
}
int main ()
{
    double ds[3][5] = {
        {1.2,5.2,6.4,3.7,5.8},{5.6,6.1,4.32,5.4,5.7},{5.4,9.7,8.7,7.6,8.9}
    };
    int n;
    put (3,5,ds);
    for (n=0;n<3;n++)
        fan (ds[n], 5);
    put (3,5,ds);
    return 0;
}