//
//  main.c
//  liang14.c
//
//  Created by OurEDA on 16/10/11.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
float get_float(void);
int main ()
{
    float count1, count2, num;
    char a, b;
    printf("Enter the operation of your choise:\n");
    printf("a.add  s.subtract\n""m.multiply  d.divide\n""q.quit\n");
    scanf("%c",&a);
    while (a != 'q'){
    printf("Enter first number:");
    count1 = get_float();
    printf("Enter second number:");
    count2 = get_float();
    switch (a) {
        case 'a':
            num = count1+count2;
            break;
        case 's':
            num = count1-count2;
            break;
        case 'm':
            num = count1*count2;
            break;
        case 'd':
            while (count2 == 0)
            {
                printf("Enter a number other than 0:");
            count2 = get_float();
            }
                num = count1/count2;
            break;
               }
        printf("The result is %.2f\n",num);
        printf("Anything else?\ny or n\n");
        if ((b = getchar()) == 'y')
        {
            while (getchar() != '\n')
            continue;
            printf("Enter the operation of your choise:\n");
            printf("a.add  s.subtract\n""m.multiply  d.divide\n""q.quit\n");
            scanf("%c",&a);
            while (getchar() != '\n')
                continue;
        }
        else if (b == 'n')
            break;
            
    }
    return 0;
}
float get_float(void)
{
    float n;
    if (scanf("%f",&n) == 1)
    {
        while (getchar() != '\n')
            continue;
        return n;
    }
    else
    {
        do{
            while (getchar() != '\n')
                continue;
            printf("Please enter a number, such as 2.5, -1, -1.78E8, or 3:");
        }
        while (scanf("%f",&n) != 1);
        return n;
    }
}