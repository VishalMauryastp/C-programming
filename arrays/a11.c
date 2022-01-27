// write a program to convert digits into words.
#include <stdio.h>
void main()
{
    int i, n, x, y, rev = 0;
    printf("enter number");
    scanf("%d", &n);
    while (n > 0)
    {
        x = n % 10;
        rev = rev * 10 + x;
        n = n / 10;
    }
    while (rev > 0)
    {
        y = rev % 10;
        if (y == 0)
        {
            printf("Zero ");
        }
        else if (y == 1)
        {
            printf("one ");
        }
        else if (y == 2)
        {
            printf("two ");
        }
        else if (y == 3)
        {
            printf("three ");
        }
        else if (y == 4)
        {
            printf("four ");
        }
        else if (y == 5)
        {
            printf("five ");
        }
        else if (y == 6)
        {
            printf("six ");
        }
        else if (y == 7)
        {
            printf("seven ");
        }
        else if (y == 8)
        {
            printf("eight ");
        }
        else if (y == 9)
        {
            printf("nine ");
        }
        rev = rev / 10;
    }
    printf("\n");
}