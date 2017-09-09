//
//  main.c
//  liang35.c
//
//  Created by OurEDA on 16/11/6.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAXSEAT 12
#define MAXAUTL 40
struct seat {
    int number;
    bool state;
    char lastname[MAXAUTL];
    char firstname[MAXAUTL];
};
void _a(struct seat *tourist)
{
    int flag, n=0;
    while (n<MAXSEAT)
    {
        if (tourist[n].state)
            ;
        else
            flag++;
        n++;
    }
    printf("This plane have %d seats\n",flag);
}
void _b(struct seat *tourist)
{
    int n=0;
    while (n<MAXSEAT)
    {
        if (tourist[n].state)
            ;
        else
            printf("%d\n",tourist[n].number);
        n++;
    }
}
void _c(struct seat *tourist)
{
    int n=0;
    while (n<MAXSEAT)
    {
        printf("%d ",tourist[n].number);
        if (tourist[n].state)
            printf("full\n");
        else
            printf("empty\n");
        n++;
    }
}
void _d(struct seat *tourist)
{
    int n;
    printf("Please tell me what seat number about your choose:");
    scanf("%d",&n);
    while (getchar() != '\n')
        continue;
    printf("Ok, please tell me your last name\n");
    scanf("%s",tourist[n-1].lastname);
    while (getchar() != '\n')
        continue;
    printf("Ok, please tell me your first name\n");
    scanf("%s",tourist[n-1].firstname);
    while (getchar() != '\n')
        continue;
    printf("Please check the message\n");
    printf("passenger: %s %s, seat number: %d\n",tourist[n-1].firstname,tourist[n-1].lastname,tourist[n-1].number);
    tourist[n-1].state=1;
}
void _e(struct seat *tourist)
{
    int n;
    printf("Please tell me what seat number you reserve:");
    scanf("%d",&n);
    strcmp(tourist[n-1].firstname, "Nothing");
    strcmp(tourist[n-1].lastname, "Nothing");
    tourist[n-1].state = 0;
}
int main ()
{
    char ch=' ';
    struct seat tourist[MAXSEAT];
    for (int n=0;n<MAXSEAT;n++)
    {
        tourist[n].number=n+1;
        tourist[n].state=0;
        strcmp(tourist[n].firstname,"Nothing");
        strcmp(tourist[n].lastname, "Nothing");
    }
    while (ch != 'f'){
    printf("To choose a function, enter its letter label:\n");
    printf("a) Show number of empty seats\nb) Show list of empty seats\nc) Show alphabetical list of seats\nd) Assign a customer to a seat assignment\ne) Delete a seat assignment\nf) Quit\n");
        scanf("%c",&ch);
        while (getchar() != '\n')
            continue;
        switch (ch){
            case 'a':
                _a(tourist);
                break;
            case 'b':
                _b(tourist);
                break;
            case 'c':
                _c(tourist);
                break;
            case 'd':
                _d(tourist);
                break;
            case 'e':
                _e(tourist);
                break;
            case 'f':
                break;
        }
        if (ch == 'f')
            break;
    }
    printf("Thank you use this procedure");
    return 0;
}