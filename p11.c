// write program to find sum of two number using function 
#include <stdio.h>
int add(int, int);
void main()
{
    int a, b, sum, x, y;
    printf("enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    sum = add(a, b);
    printf("sum= %d\n", sum);
    //  printf("sum= %d\n", add(a, b));
}

int add(int x, int y)
{
    int m;
    m = x + y;
    return m;
}
