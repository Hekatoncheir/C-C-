//
//  main.c
//  liang25.c
//
//  Created by OurEDA on 16/10/23.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAX 100
#define N 10
void a(char (*pa)[100])//按初始顺序排列
{
    int n;
    while (n++<N){
        puts(*pa);
        pa++;
    }

}
void b(char (*pa)[100])//按ASCII排列
{
    int n = 9;
    int i, j;
    char *et[10], *er;
    for (int a=0;a<10;a++)
        et[a] = pa[a];
    for (i=0;i<n;++i)
    {
        for (j=0;j<n;j++)
            if (strcmp(et[j], et[j+1])>0){
                er = et[j];
                et[j] = et[j+1];
                et[j+1] = er;
            }
    }
    for (int a=0;a<10;a++)
        puts(et[a]);
}
void c(char (*pa)[100])//按长度排列
{
    int n=9;
    int i, j;
    char *et[10], *er;
    for (int a=0;a<10;a++)
        et[a] = pa[a];
    for (i=0;i<n;++i)
    {
        for (j=0;j<n;j++)
            if (strlen(et[j]) < strlen(et[j+1])){
                er = et[j];
                et[j] = et[j+1];
                et[j+1] = er;
            }
    }
    for (int a=0;a<10;a++)
        puts(et[a]);
}
void d(char (*pa)[100])//按第一个单词的长度排列
{
    char *ett[10];
    char *pb;
    for (int a=0;a<10;a++)
        ett[a] = pa[a];
    int et[11], flag=0, n, m;
        for (n=0;n<10;++n)
        {
            for (m=0;m<100;m++)
            {
                if ((*(*(pa+n)+m)) != ' ')
                    flag++;
                else
                    break;
            }
            et[n] = flag;
            flag = 0;
        }
    for (n=0;n<9;n++)
    {
        for (m=0;m<9;m++)
        {
            if (et[m] < et[m+1])
            {
                pb = ett[m];
                ett[m] = ett[m+1];
                ett[m+1] = pb;
            }
        }
    }
    for (int a=0;a<10;a++)
        puts(ett[a]);
}
int main ()//测试函数
{
    int n=1;
    char ch='w';
    char chstr[10][100];
    char (*pa)[100] = chstr;
    while (ch != 'q'){
    printf("Please write you first string\n");
    gets(chstr[0]);
    while (n<N){
        printf("Please write you next string\n");
        gets(chstr[n]);
        n++;
    }
    printf("Please choice a way to dispose character string");
    printf("a:The initial order to print\n""b:according to the AScII\n""c:according to the length\n""d:according to the first word length\n""q:finish");
    ch = getchar();
    switch (ch)
    {
        case 'a':
            a(pa);
            break;
        case 'b':
            b(pa);
            break;
        case 'c':
            c(pa);
            break;
        case 'd':
            d(pa);
            break;
        case 'q':
            break;
    }
    }
    return 0;
}