//
//  main.c
//  liang22.c
//
//  Created by OurEDA on 16/10/17.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
void copy (int N, int M, double (*ps)[5])
{
    int n, m;
    for (n=0;n<N;n++)
    {
        for (m=0;m<M;m++){
            printf("Please give me the number\n");
            scanf("%lf", &ps[n][m]);
            while (getchar() != '\n')
                continue;
        }
    }
}
double mean (int M, double *pf)
{
    int m;
    double num;
    for (m=0;m<M;m++)
        num += *(pf+m);
    return num/M;
}
double max (int N, int M, double (*pd)[M])
{
    int n, m;
    double max=0, mid=**pd;
    for (n=0;n<N;n++)
    {
        for (m=0;m<M;m++)
        {
            max = (mid>*(*(pd+n)+m)) ? mid:*(*(pd+n)+m);
            mid = max;
        }
    }
    return max;
}
void put (int N, int M, double ar[N][M])
{
    int n, m;
    for (n=0;n<N;n++)
    {
        for (m=0;m<M;m++)
            printf(" %.2lf",*(*(ar+n)+m));
    }
}
int main ()
{
    double liang[3][5];
    double mid, mid2, ma;
    copy (3,5,liang);
    int n;
    for (n=0;n<3;n++){
        mid = mean (5,liang[n]);
        mid2 += mid;
    }
    printf("%.2lf\n",mid2);
    ma = max (3,5,liang);
    printf("%.2lf\n",ma);
    put (3,5,liang);
    return 0;
}