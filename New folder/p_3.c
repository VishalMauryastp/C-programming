#include <stdio.h>
void main()
{
    int i, j, rows, k = 0;
    printf("Entre the number: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = rows; i >= 1; i--)
    {
        for (j = rows - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (k = (2 * i - 1); k >= 1; k--)
        {
            for (k = (2 * i - 1); k >= 1; k--)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}