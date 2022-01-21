#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, sum = 0, sign = -1;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sign = -(sign);
        sum = sum + (i * sign);
        printf("%d", i);
    }
    printf("sum=%d", sum);
}