//
//  main.c
//  函数_4
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
struct xiang {
    char content[20];
    int length;
    struct xiang * next;
};
char* randomString(){
    int length = getRand(5,10);
    char* string = (char*)malloc(sizeof(char)*length + 1);
    for(int i =0;i < length ; i++){
        string[i] = (char)getRand('a','z');
    }
    string[length] = '\0';
    return string;
}
int main ()
{
    int flag = 0;
    struct xiang * head = NULL;
    struct xiang * prev = NULL, *current;
    char input[TSIZE];
    srand((unsigned int)time(NULL));
    while (flag<=10)
    {
        strcpy(input, randomString());
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
}