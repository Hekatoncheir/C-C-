//
//  main.c
//  liang4.c
//
//  Created by OurEDA on 16/10/8.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
int main ()
{
    srand((unsigned)time(NULL));
    
    for (int i = 0; i < 10;i++){
        printf("%s\n",randomString());
    }
    return 0;
}