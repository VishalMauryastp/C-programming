// write program to find sum of two number using function 
#include <stdio.h>
int sum();
void main()
{
    int result;
    result = sum();
    printf("sum= %d\n", result);
}

int sum()
{
    int a, b;
    printf("enter two no");
    scanf("%d%d", &a, &b);
    return a + b;
}