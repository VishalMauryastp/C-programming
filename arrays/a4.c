// write a program to add to array element of size 10
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], b[10], c[10], i;
    // clrscr();
    printf("Enter first array element \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter second array element \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 10; i++)
        c[i] = a[i] + b[i];
    printf("Adition of two array element\n");
    for (i = 0; i < 10; i++)
        printf("%d\n", c[i]);

    getch();
}