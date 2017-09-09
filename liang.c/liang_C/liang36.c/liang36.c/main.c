//
//  main.c
//  liang36.c
//
//  Created by OurEDA on 16/11/9.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
int main ()
{
    int a = 456, b=789;
    b = ~b&~a;
    printf("%d",b);
    return 0;
}