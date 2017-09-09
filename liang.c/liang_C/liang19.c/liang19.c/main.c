//
//  main.c
//  liang19.c
//
//  Created by OurEDA on 16/10/17.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
int liang (int *pf, int b)
{
    int m, max = 0, n = *pf, min = 0, v = *pf;
    for (m=0;m<b;m++)
    {
        max = (n >= *(pf+m)) ? n:*(pf+m);
        min = (v >= *(pf+m)) ? *(pf+m):v;
        n = max;
        v = min;
    }
    return (max-min);
}
int main ()
{
    int wen[5] = {2,25,42,10,69};
    int n;
    n = liang(wen,5);
    printf("%d", n);
    return 0;
}