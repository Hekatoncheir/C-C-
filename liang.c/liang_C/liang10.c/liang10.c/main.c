//
//  main.c
//  liang10.c
//
//  Created by OurEDA on 16/10/9.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main ()
{
    int d=0, x=0;
    char ch;
    while ((ch = getchar()) != '\n')
    {
        if (islower(ch))
            x++;
        else if (isupper(ch))
            d++;
    }
    printf("%d %d", x, d);
    return 0;
}
