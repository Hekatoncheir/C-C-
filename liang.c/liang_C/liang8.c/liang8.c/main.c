//
//  main.c
//  liang8.c
//
//  Created by OurEDA on 16/10/28.
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
void _4 (struct xiang *head)
{
    char temp[20];
    struct xiang * pa;
    struct xiang * pb;
    pa = pb = head;
    int n=0, m=0;
    for (int i=0;i<10;++i)
    {
        for (int j=0;j<10-i;j++)
        {
            while (n<j)
            {
                pa = pa->next;
                n++;
            }
            while (m<j+1)
            {
                pb = pb->next;
                m++;
            }
            if (strlen(pa->content) < strlen(pb->content)){
                strcpy(temp, pa->content);
                strcpy(pa->content, pb->content);
                strcpy(pb->content, temp);
            }
            else if (strlen(pa->content) < strlen(pb->content))
                continue;
            else if (strlen(pa->content) == strlen(pb->content))
            {
                if (strcmp(pa->content, pb->content)<=0)
                    continue;
                else
                {
                    strcpy(temp, pa->content);
                    strcpy(pa->content, pb->content);
                    strcpy(pb->content, temp);
                }
            }
        }
    }
}
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
    current = head;
    while (current != NULL)
    {
        printf("%s\n",current->content);
        current = current->next;
    }
    current = head;
    while (current != NULL)
    {
        free (current);
        current = current->next;
    }
    return 0;
}