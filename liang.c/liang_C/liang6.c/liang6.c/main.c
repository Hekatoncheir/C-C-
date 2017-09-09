//
//  main.c
//  liang6.c
//
//  Created by OurEDA on 16/10/8.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
int main ()
{
    srand((unsigned)time(NULL));
    bool boolean;
    int a, b, c;
    char liang[20], wen[20];
    for (c=0,a = rand()%(122-97+1)+97,b = rand()%(10-5+1)+5;c<b;c++){
        liang[c] = a;
        a = rand()%(122-97+1)+97;
    }
    for (c=0,a = rand()%(122-97+1)+97,b = rand()%(10-5+1)+5;c<b;c++){
        wen[c] = a;
        a = rand()%(122-97+1)+97;
    }
struct xiang
    {
        char content[20];
        int length;
    };
    struct xiang strstu1, strstu2;
    strcpy (strstu1.content, &liang);
    strcpy (strstu2.content, &wen);
    strstu1.length = (int) strlen(liang);
    strstu2.length = (int) strlen(wen);
    if (strstu1.length>strstu2.length)
        boolean = 1;
    else if (strstu1.length<strstu2.length)
        boolean = 0;
    else if (strstu1.length==strstu2.length)
    {
        if (strcmp(strstu1.content, strstu2.content)<=0)
        boolean = 1;
        else
        boolean = 0;
    }
    printf("%s\n%s\n",liang, wen);
    printf("%s\n%s\n",strstu1.content, strstu2.content);
    printf("%d",boolean);
    return 0;
}