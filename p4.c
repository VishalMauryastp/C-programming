// write a program to  genrate the first fibonaci series
#include <stdio.h>
void main()
{
    int n1 = 0, n2 = 1, i, number, n3;
    printf("Enter number: ");
    scanf("%d",&number);
    printf("\n%d,%d", n1, n2);

    for (i = 2; i < number; ++i)
        
    {
        n3 = n1 + n2;
        printf("\a,%d", n3);
        n1 = n2;
        n2 = n3;
    }
    printf("\n");
}