//
//  main.c
//  liang.23
//
//  Created by OurEDA on 16/10/21.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
int liang(const int n)
{
    int a[n+1], b, c;
    for (c=0;c<n;c++)
        a[c]=0;
    a[0]=1;
    a[1]=2;
    for (b=2;b<n;b++)
        a[b] = a[b-1]+a[b-2];
    return a[b-1];
 }
int main ()
{
    int n, an;
    scanf("%d",&n);
     if (n>=3)
         an=liang(n);
    else if (n==1)
        an=1;
    else if (n==2)
        an=2;
        printf("%d\n",an);
    return 0;
}