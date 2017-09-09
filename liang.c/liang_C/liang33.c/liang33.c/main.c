//
//  main.c
//  liang33.c
//
//  Created by OurEDA on 16/11/6.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#define LENTH 10
#define GRADE 4
#define CSIZE 4
struct name {
    char lastname[LENTH];
    char firstname[LENTH];
};
struct student {
    struct name sname;
    double grade[GRADE];
    double num;
};
void mean(struct student *sa)
{
    for (int m=0;m<CSIZE;m++)
    {
        sa->num = (sa->grade[0]+sa->grade[1]+sa->grade[2])/3;
        sa++;
    }
}
int main ()
{
    int n;
    double me;
    struct student students[CSIZE] = {0};
    while (n<CSIZE)
    {
        printf("Please enter the student's lastname\n");
        gets(students[n].sname.lastname);
        printf("Please enter the student's firstname\n");
        gets(students[n].sname.firstname);
        printf("Now, please enter three grads about this student\n");
        scanf("%lf %lf %lf",&students[n].grade[0], &students[n].grade[1], &students[n].grade[2]);
        n++;
    }
    mean(students);
    for (int n=0;n<CSIZE;n++)
        printf("%s %s's grades are %lf %lf %lf, mean value is %lf\n",students[n].sname.lastname,students[n].sname.firstname,students[n].grade[0],students[n].grade[1],students[n].grade[2],students[n].num);
    for (int a=0;a<CSIZE;a++)
        me += students[a].num;
    printf("This class's mean value is %lf",me/CSIZE);
    return 0;
}