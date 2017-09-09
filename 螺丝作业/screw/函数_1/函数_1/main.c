//
//  main.c
//  函数_1
//
//  Created by OurEDA on 16/10/29.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define TSIZE 20
#define getRand(a,b) (rand()%(b-a+1)+a)
char* randomString(){
    int length = getRand(5,10);
    char* string = (char*)malloc(sizeof(char)*length + 1);
    for(int i =0;i < length ; i++){
        string[i] = (char)getRand('a','z');
    }
    string[length] = '\0';
    return string;
}
