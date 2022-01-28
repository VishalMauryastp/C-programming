// write a program to find transpose of matrix
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, r, c;
    printf("Enter matrix row and column: ");
    scanf("%d%d", &r, &c);
    int a[r][c], b[c][r];
    printf("Enter matrix array element in row wise\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Tranpose of matrix is\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for (j = 0; j < c; j++)
    {
        for (i = 0; i < r; i++)
            printf("%d ", b[j][i]);
        printf("\n");
    }
    getch();
}