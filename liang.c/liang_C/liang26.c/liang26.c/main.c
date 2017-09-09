//
//  main.c
//  liang26.c
//
//  Created by OurEDA on 16/10/24.
//  Copyright (c) 2016年 jackie. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main ()
{
    char ch[30]="hello my hony", wa;
        printf("Choice you way\n");
        scanf("%c",&wa);
    puts(ch);
        switch (wa) {
            case 'p':
                puts(ch);
                break;
            case 'u':
                    for (int n =0;n<13;n++)
                        ch[n] = toupper(ch[n]);
                puts(ch);
                break;
            case 'i':
                    for (int m =0;m<13;m++)
                        ch[m] = tolower(ch[m]);
                puts(ch);
                break;
        }
}