// write program to find sum of two number using function
#include <stdio.h>
int add(int, int);
int main()
{
    int a, b, sum;
    printf("enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    sum = add(a, b);
    printf("sum= %d\n", sum);
    return 0;
}

int add(int x, int y)
{
    int m;
    m = x + y;
    return m;
}
