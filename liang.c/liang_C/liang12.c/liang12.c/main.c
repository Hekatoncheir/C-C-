//
//  main.c
//  liang12.c
//
//  Created by OurEDA on 16/10/10.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
int main ()
{
    int guess=50,max=100,min=0;
    printf("Pick an integer from 1 to 100. I will try to guess");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is you number %d?\n",guess);
    while (getchar () != 'y')
           {
               while (getchar () != '\n')
                   continue;
               printf("Well, what is the number is bigger than %d or smaller than %d?\n", guess, guess);
               if (getchar() == 'b')
               {
                   while (getchar() != '\n')
                       continue;
                   min = guess;
                   guess = (min+max)/2;
                   printf("Well, then, is it %d\n",guess);
               }
               else if (getchar() == 's')
               {
                   while (getchar() != '\n')
                       continue;
                   max = guess;
                   guess = (min+max)/2;
                   printf("Well, then, is it %d\n", guess=(min+max)/2);
               }
           }
    printf("I knew i could do it!");
           return 0;
}