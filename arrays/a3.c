// write a program to find the smallest element from an array of 10 numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], i, min;
    printf("Enter array element \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    printf("the smallest array element is %d", min);
    getch();
}