//
//  main.c
//  函数_7
//
//  Created by OurEDA on 16/10/29.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define TSIZE 20
struct xiang {
    char content[20];
    int length;
    struct xiang * next;
};
struct xiang * _6 (FILE *pa)
{
    fopen("screw_work.text", "r");
    int flag = 0;
    struct xiang * head = NULL;
    struct xiang * prev = NULL, *current;
    char input[TSIZE];
    while (flag<=10)
    {
        fgets(input, 20, pa);
        current = (struct xiang *) malloc (sizeof(struct xiang));
        if (head == NULL)
            head = current;
        else
            prev->next = current;
        current->next = NULL;
        strcpy(current->content, input);
        prev = current;
        flag++;
    }
    return head;
}
