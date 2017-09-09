//
//  main.c
//  liang5.c
//
//  Created by OurEDA on 16/10/8.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    srand((unsigned)time(NULL));
    int a, b, c;
    for (c=0,a = rand()%(122-97+1)+97,b = rand()%(10-5+1)+5;c<=b;c++){
        printf("%c",a);
        a = rand()%(122-97+1)+97;
        b = rand()%(10-5+1)+5;
    }
    return 0;
}
