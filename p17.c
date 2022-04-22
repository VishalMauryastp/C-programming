#include <stdio.h>
void main()
{
    int i, n, j, sum = 0;
    // for (i = 1; i <= 3; i++)
    // {
    //     sum = sum + n;
    //     n += 3;
    // }
    // printf("Sum1: %d\n", sum);
    j = 1;
    i = 2;
    // while (j <= 3)
    // {
    //     sum = sum + i;
    //     i += 3;
    //     j++;
    // }
    // printf("Sum2: %d\n", sum);
    do
    {
        sum += i;
        printf("+%d", i);
        i += 3;
        j++;
    } while (j <= 100);
    printf(": %d\n", sum);
}