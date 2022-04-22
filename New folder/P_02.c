/* Enter a number and print a Flag.*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter a Number to print Flag : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("**");
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("**");
        }

        printf("\n");
    }
}