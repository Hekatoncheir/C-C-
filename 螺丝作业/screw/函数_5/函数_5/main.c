//
//  main.c
//  函数_5
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
