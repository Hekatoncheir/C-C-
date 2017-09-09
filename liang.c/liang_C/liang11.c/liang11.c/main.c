//
//  main.c
//  liang11.c
//
//  Created by OurEDA on 16/10/10.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
int main ()
{
    char ch;
    int zimu=0, word=0;
    while ((ch = getchar()) != '\n')
    {
        if (ch == ' '){
            word++;
            continue;
        }
        else
            zimu++;
    }
    printf("%d",zimu/word);
    return 0;
}