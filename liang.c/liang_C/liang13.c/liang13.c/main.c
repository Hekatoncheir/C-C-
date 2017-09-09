//
//  main.c
//  liang13.c
//
//  Created by OurEDA on 16/10/11.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
char get_first (void)
{
    char ch;
    while ((ch = getchar()) != '\n' && ch!=' ')
        continue;
    return ch;
}
int main ()
{
    char ab;
    ab = get_first();
    printf("%c",ab);
    return 0;
}