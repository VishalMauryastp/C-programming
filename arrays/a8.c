// write a program to add nxn matrix by using array
#include <stdio.h>
void main()
{
    int i, j, r, c;
    printf("Enter the numbers of row and column: ");
    scanf("%d%d", &r, &c);
    int a[r][c], b[r][c], x[r][c];
    printf("Enter the first matrix element\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix element\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    /* Add two matrix element*/
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            x[i][j] = a[i][j] + b[i][j];
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < c; j++)
    //     {
    //         printf("%d\t", x[i][j]);
    //     }
    //     printf("\n");
    // }
}
