//
//  main.c
//  liang28.c
//
//  Created by OurEDA on 16/11/1.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 40
int main ()//打开两个文件，将其中的字符每行依次打印
{
    FILE *fa, *fb;
    int ch;
    char name[2][LEN];
    printf("Please enter the file's name:");
    fgets(name[0],LEN,stdin);
    printf("Please enter the next file's name:");
    fgets(name[1], LEN, stdin);
    if ((fa = fopen(name[0], "r")) == NULL)
    {
        printf("Can't open %s",name[0]);
        exit(1);
    }
    if ((fb = fopen(name[1], "W")) == NULL)
    {
        printf("Can't open %s",name[1]);
        exit(2);
    }
    while ((ch = getc(fa)) != EOF)
    {
        if (ch != '\n')
        putchar(ch);//去掉则打印在同一行
        else
        {
            putchar(10);
            while ((ch = getc(fb)) != EOF)
                if (ch != '\n')
                    putchar(ch);
            else
                break;
        }
        putchar(10);//去掉则打印在同一行
        continue;
    }
    if (fclose(fa) == EOF)
    {
        printf("Can't close %s",name[0]);
        exit(3);
    }
    if (fclose(fb) == EOF)
    {
        printf("Can;t close %s",name[1]);
        exit(4);
    }
    return 0;
}