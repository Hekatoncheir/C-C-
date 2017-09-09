//
//  main.c
//  liang30.c
//
//  Created by OurEDA on 16/11/2.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char *argv[])
{
    FILE *fa[argc];
    for (int n=1;n<=argc;n++)
    {
        if ((fa[n-1] = fopen(argv[n], "r")) == NULL)
        {
            printf("Can't open %s",argv[n]);
            exit(1);
        }
    }
    int flag, m=0;
    char ch;
    while ((ch = getc(fa[m])) != EOF)
    {
        if (ch == *argv[0]){
            flag++;
            m++;
            continue;
        }
        continue;
    }
    printf("These files have %d same char in %s",flag, argv[0]);
    return 0;
}
