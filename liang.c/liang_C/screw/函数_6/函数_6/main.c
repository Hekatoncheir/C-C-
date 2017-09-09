//
//  main.c
//  函数_6
//
//  Created by OurEDA on 16/10/29.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct xiang {
    char content[20];
    int length;
    struct xiang * next;
};
void _5 (struct xiang * head)
{
    FILE *pa;
    struct xiang * pb;
    pb = head;
    pa = fopen ("screw_work.txt","w");
    while (pb != NULL)
    {
        fputs(pb->content, pa);
        pb = pb->next;
    }
    fclose(pa);
}
