//
//  main.c
//  函数_2
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
    char content[TSIZE];
    int length;
};
struct xiang strstu1;
struct xiang * _2 (void)
{
    struct xiang *pa;
    pa = (struct xiang *) malloc (sizeof(struct xiang));
    strcpy(strstu1.content, randomString());
    strstu1.length = (int)strlen(strstu1.content);
    return pa;
}