//
//  main.c
//  liang4.c
//
//  Created by OurEDA on 16/10/5.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#define globe 1.25
#define sugarbeet 0.65
#define carrot 0.89
int main ()
{
    float wa=0, wb=0, wc=0, weight, price, discount, freight;
    char d, e;
    printf("What do you want to buy?\n""a.globe  b.sugarbeet  c.carrot  q.finish\n");
    while ((d = getchar()) != 'q')
    {
          printf("How much weight dou you want to buy?\n");
          scanf("%f",&weight);
          switch (d)
        {
          case 'a':
               wa = weight;
              break;
          case 'b':
               wb = weight;
              break;
          case 'c':
               wc = weight;
              break;
        }
          printf("Anything else?\n""y or n\n");
          scanf("%*c%c",&e);
          if (e == 'y')
        {
            printf("What is you choise\n");
            continue;
        }
          else if (e == 'n')
        {
            printf("Confirm,you will buy $%.2f globe, $%.2f sugarbeet, $%.2f carrot\n", wa, wb, wc);
            break;
        }
    }
    price = wa*globe+wb*sugarbeet+wc*carrot;
    weight = wa+wb+wc;
    if (price>=100)
        discount = price*0.05;
    if (weight<=5)
        freight = 3.5;
    else if (weight>5 && weight<20)
        freight = 10.00;
    else if (weight>=20)
        freight = 8+(weight-20)*0.1;
    printf("globe $1.25/L  sugarbeet $0.65/L  carrot $0.89/L\n");
    printf("You will buy $%.2f globe, $%.2f sugarbeet, $%.2f carrot\n", wa, wb, wc);
    printf("The pay for globe is $%.2f, sugarbeet is $%.2f, carrot is $%.2f\n", wa*globe, wb*sugarbeet, wc*carrot);
    printf("The price is $%.2f, freight is $%.2f, discount is $%.2f\n", price, freight, discount);
    printf("So, this indent you will cost $%.2f",price+freight-discount);
    return 0;
}