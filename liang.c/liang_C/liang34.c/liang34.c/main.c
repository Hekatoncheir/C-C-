//
//  main.c
//  liang34.c
//
//  Created by OurEDA on 16/11/6.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
void _c(struct book *sa, int count)
{
    int n;
    printf("What content you want to change?\n");
    printf("(1)title  (2)author  (3)value\n");
    scanf("%d",&n);
    getchar();
    switch (n)
    {
        case 1:
            printf("Please enter the new title\n");
            gets(sa[count].title);
            break;
        case 2:
            printf("Please enter the new author\n");
            gets(sa[count].author);
            break;
        case 3:
            printf("Please enter the new value\n");
            scanf("%f",&sa[count].value);
            break;
    }
}
int main ()
{
    struct book library[MAXBKS];
    char ch;
    int count = 0, delcount[MAXBKS], del=0, n=0;
    int index, filecount;
    FILE *pbooks;
    int size = sizeof(struct book);
    if ((pbooks = fopen("book.dat", "r+b")) == NULL)
    {
        fputs("Can't open book.dat file\n", stderr);
        exit(1);
    }
    rewind(pbooks);
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    {
        if (count == 0)
            puts("Current contents of book.dat: ");
        printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
        printf("Do you want to del or change this list?");
        printf("a:NO  b:del  c:change\n");
        scanf("%c",&ch);
        switch (ch) {
            case 'a':
                break;
            case 'b':
                strcmp(library[count].title,"Nothing");
                strcmp(library[count].author, "Nothing");
                library[count].value = 0;
                delcount[del] = count;
                del++;
                break;
            case 'c':
                _c(library, count);
                break;
        }
        count++;
    }
    filecount = count;
    if (count == MAXBKS)
    {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }
    if (del != 0){
    puts("Please enter new books to fill the del list\n");
        puts("Please add new book titles.");
        while (gets(library[delcount[n]].title) != NULL && library[delcount[n]].title[0] != '\0')
        {
            puts("Now enter the author.");
            gets(library[count].author);
            puts("Now enter the value.");
            scanf("%f", &library[count++].value);
            while (getchar() != '\n')
                continue;
            if (++n < del)
                puts("Enter the next title.\n");
            else
                break;
        }
    }
    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
    while (count < MAXBKS && gets(library[count].title) != NULL && library[count].title[0] != '\0')
    {
        puts("Now enter the author.");
        gets(library[count].author);
        puts("Now enter the value.");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            puts("Enter the next title.");
    }
    if (count > 0)
    {
        puts("Here is the list of your books: ");
        for (index = 0;index<count;index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        fwrite(&library[filecount], size, count-filecount, pbooks);
    }
    else
        puts("NO books? Too bad.\n");
    puts("Bye.\n");
    fclose(pbooks);
    return 0;
}