// write a program to define a matrix by using array
#include <stdio.h>
void main()
{
    int mat[3][3], i, j;
    printf("Enter the array element row wise\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    /*print array element ro wise\n */
    printf("matrix is:-\n");
    j=0;
    for (i = 0; i < 3; i++)
    printf("%d  %d  %d\n", mat[i][j] ,mat[i][j+1],mat[i][j+2]);
}