//
//  main.c
//  liang29.c
//
//  Created by OurEDA on 16/11/2.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int ch;
    long ad;
    FILE *fb;
    char name[20];
    printf("Please enter the first file,[enter] to end\n");
    gets(name);
    while ((fb = fopen(name, "r")) != NULL && name[0] != '\0')
    {
        printf("Please enter the address(a number)\n");
        scanf("%ld",&ad);
        fseek(fb, ad, SEEK_SET);
        while ((ch = fgetc(fb)) != EOF)
            putchar(ch);
        fclose(fb);
        printf("Please enter the next file,[enter] to end");
        fgets(name, 20, stdin);
    }
    printf("Bye");
    return 0;
}