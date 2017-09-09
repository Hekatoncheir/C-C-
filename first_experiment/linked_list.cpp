#include <stdio.h>
#include <stdlib.h>
#define LEN 50
#define AUT 10
#define size sizeof(struct Book)
struct Book {
    int num;
    char name[LEN];
    char author[AUT];
    int isbn;
    double price;
    struct Book *next;
};
void show (struct Book *head)
{
    struct Book *pr = head;
    while (pr)
    {
        printf("%d.{\n",pr->num);
        puts(pr->name);
        puts(pr->author);
        printf("%d\n",pr->isbn);
        printf("$%.2lf}\n",pr->price);
        putchar(10);
        pr=pr->next;
    }
}
struct Book *traverse(struct Book *head, int num)
{
    struct Book *pr = head;
    while (pr->num != num)
        pr=pr->next;
    return pr;
}
void add(struct Book *head)
{
    int a, b;
    struct Book *pr = head, *current=NULL, *p1, *p2;
    show(pr);
    while ((current = (struct Book *)malloc(size))){
        printf("Where you want to add?\n(like 2~3)\n");
        scanf("%d~%d", &a, &b);
        p1=traverse(pr, a);
        p2=traverse(pr, b);
        printf("Please enter the book;s number:");
        scanf("%d",&current->num);
        printf("Please enter the book's name:");
        gets(current->name);
        printf("Please enter the book's author:");
        gets(current->author);
        printf("Please enter the book's ISBN:");
        scanf("%d",&current->isbn);
        printf("Please enter the book's price:");
        scanf("%lf",&current->price);
        p1->next=current;
        current->next=p2;
    }
}
void del(struct Book *head)
{
    struct Book *pr = head, *p1, *p2;
    int a;
    show(pr);
    printf("Please enter the number what do you want to del\n");
    scanf("%d",&a);
    p1 = traverse(pr, a);
    p2 = traverse(pr, a-1);
    p2->next = p1->next;
}
void change(struct Book *head)
{
    struct Book *pr = head, *current;
    int a;
    show(pr);
    printf("Please enter the number what dou want to change\n");
    scanf("%d",&a);
    current = traverse(pr, a);
    printf("Please enter the book;s number:");
    scanf("%d",&current->num);
    printf("Please enter the book's name:");
    gets(current->name);
    printf("Please enter the book's author:");
    gets(current->author);
    printf("Please enter the book's ISBN:");
    scanf("%d",&current->isbn);
    printf("Please enter the book's price:");
    scanf("%lf",&current->price);
}
int main ()
{
    struct Book *head=NULL, *pre=NULL, *current=NULL;
    while ((current=(struct Book *)malloc(size)))
    {
        if (head == NULL) {
            head = current;
        }
        else {
            pre->next = current;
        }
        printf("Please enter the book;s number:");
        scanf("%d",&current->num);
        printf("Please enter the book's name:");
        gets(current->name);
        printf("Please enter the book's author:");
        gets(current->author);
        printf("Please enter the book's ISBN:");
        scanf("%d",&current->isbn);
        printf("Please enter the book's price:");
        scanf("%lf",&current->price);
        pre = current;
        pre->next = NULL;
        while (getchar() != '\n')
            continue;
        printf("Do you want to put the next one?\nEnter [q] to quit\n");
        if (getchar() == 'q')
            break;
        while (getchar() != '\n')
            continue;
    }

    return 0;
}
