// write a program to print table using function;
#include <stdio.h>
void table(int);
void main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (n = n; n <= 10; n++)
    {
        table(n);
    }
}
void table(int a)
{
    int i, n, t;
    for (i = 1; i <= 10; i++)
    {
        t = a * i;
        printf("%d ", t);   
    }
    printf("\n");
}