// write a program to calculate the factorial using function with argument and return value
#include <stdio.h>
int factorial(int);
void main()
{
    int number, x;
    printf("enter the number: ");
    scanf("%d", &number);
    x = factorial(number);
    printf("\afactorial=%d\n", x);
}
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    fact = fact * i;
    return (fact);
}
