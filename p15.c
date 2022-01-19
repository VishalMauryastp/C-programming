// write a program to find factorial by using function with no argumrnt and return value
#include <stdio.h>
int factorial(int);
void main()
{int number;
    printf("factorial=%d\n", factorial(number));
}

int factorial(int n)
{
    int fact = 1,i;
    printf("enter number:  ");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
        fact = fact * i;
    return (fact);
}