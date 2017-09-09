//
//  main.c
//  liang24.c
//
//  Created by OurEDA on 16/10/21.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <string.h>
char* liang(char *pa, int n)//从输入的字符串（pa）中截取n个字符输出
{
    int a=0;
    char *pb;
    while (a++<n){
        if (*pa != ' ' && *pa != '\n')
            continue;
    else if (*pa == ' ' || *pa == '\n')
        break;
    }
    *(pa+a) = '\0';
    pb = pa;
    return pb;
}
char* find(char *pa,char ch)//在字符串（pa）中找出与ch相同的字符，返回第一个相同字符的指针
{
    int n=0;
    while (*pa != ch && *pa != '\0'){
        n++;
        pa++;
    }
    if (*pa == '\0')
        return NULL;
    else
        return pa+n;
}
char* str (char *s1, char *s2, int n)//将字符串s2复制到s1
{
    int a=0;
    while (a++<=n)
    {
        if (*s2 != '\0')
        {
            *s1 = *s2;
            s1++;
            s2++;
        }
        else
            break;
    }
    return s1;
}
char* string_in(char *pa, char *pb)//判断字符串pa中是否有与pb相同的字符串
{
    int n;
    while (*pa)
    {
        if (*pa != *pb)
        {
            pa++;
            continue;
        }
        else if (*pa == *pb)
        {
            while (*pa == *pb && *pb){
                pb++;
                pa++;
                n++;
                continue;
            }
            if (*pb == '\0')
                break;
            else{
                pb = pb-n;
                pa = pa-n+1;
                continue;
            }
        }
    }
    if (*pa == '\0')
        return NULL;
    else
        return pa-n-1;
}
void ant(char *pa)//将输入的字符串反向打印
{
    char *pb;
    int n, a, c;
    n = (int)strlen(pa);
    c = n;
    char b[n+1];
    pb = b;
    for (a=0;a<n;a++)
    {
        *pb = *(pa+c-1);
        c--;
        pb++;
    }
    puts(pb-n);
}
void del(char *pa)//除去字符串中的空格
{
    while (*pa)
    {
        if (*pa == ' '){
            pa++;
            continue;
        }
        else{
            putchar(*pa);
            pa++;
        }
    }
}
char * _4 (struct xiang *pa)//对一个链表进行排序
{
    struct xiang *cen;
    cen = pa;
    char ch[11][20], *str, *pb[11];
    for (int i=0;i<11;i++)
    {
        strcpy(ch[i], cen->content);
        cen = cen->next;
    }
    for (int c=0;c<11;c++)
        pb[c] = ch[c];
    for (int h=0;h<10;++h)
    {
        for (int j=0;j<10-h;j++)
        {
            if (strlen(pb[j]) < strlen(pb[j+1])){
                str = pb[j];
                pb[j] = pb[j+1];
                pb[j+1] = str;
            }
            else if (strlen(pb[j]) > strlen(pb[j+1]))
                continue;
            else if (strlen(pb[j]) == strlen(pb[j+1]))
            {
                if (strcmp(pb[j], pb[j+1])<=0)
                    continue;
                else
                {
                    str = pb[j];
                    pb[j] = pb[j+1];
                    pb[j+1] = str;
                }
            }
        }
    }
    return *pb;
}
int main ()
{
    int n, a=0;
    char cs[100];
    printf("How many string will be writed?");
    scanf("%d",&n);
    getchar();
    printf("Please write the first string");
    while (a++<n){
    gets(cs);
        //选择函数
    }
    return 0;
}