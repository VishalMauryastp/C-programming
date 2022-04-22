#include <stdio.h>
#include <math.h>
void main()
{
    int i, n;
    float sum = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        sum += (float)i / ((float)i + 1);
        printf("sum=%f\n", );
    }
    printf("sum=%f\n", sum);
}
