//
//  main.c
//  liang32.c
//
//  Created by OurEDA on 16/11/6.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
void a(struct book library[MAXTITL], int count)
{
    for (int n=0;n<count;n++)
        printf("%s by %s: $%.2f\n", library[n].title, library[n].author, library[n].value);
}
void b(struct book library[MAXTITL], int count)
{
    struct book mid;
    for (int i=0;i<count-1;++i)
    {
        for (int j=0;j<count-1-i;j++)
        {
            if (library[i].title[0]<library[i+1].title[0])
            {
                mid = library[i];
                library[i] = library[i+1];
                library[i+1] = mid;
            }
        }
    }
    for (int n=0;n<count;n++)
        printf("%s by %s: $%.2f\n", library[n].title, library[n].author, library[n].value);
}
void c(struct book library[MAXTITL], int count)
{
    struct book mid;
    for (int i=0;i<count-1;++i)
    {
        for (int j=0;j<count-1-i;j++)
        {
            if (library[i].value<library[i+1].value)
            {
                mid = library[i];
                library[i] = library[i+1];
                library[i+1] = mid;
            }
        }
    }
    for (int n=0;n<count;n++)
        printf("%s by %s: $%.2f\n", library[n].title, library[n].author, library[n].value);
}
int main ()
{
    struct book library[MAXTITL];
    int count = 0;
    int index;
    char ch;
    printf("Please enter the book title.\n");
    printf("press [enter] at the start of a line to shop.\n");
    while (count<MAXBKS && gets(library[count].title) != NULL && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        gets(library[count].author);
        printf("Now enter the value.\n");
        scanf("%f",&library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }
    if (count>0)
    {
        printf("Here is the list of your books: \n");
        printf("Please choose a way to show your list\n");
        printf("a:\nb:\nc:\n");
        scanf("%c",&ch);
        switch (ch)
        {
            case 'a':
                a(library, count);
                break;
            case 'b':
                b(library, count);
                break;
            case 'c':
                c(library, count);
                break;
        }
    }
    else
        printf("No books?Too bad.\n");
    return 0;
}