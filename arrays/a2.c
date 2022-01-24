//write a program to find the average of 10 number using arrays
#include <stdio.h>
void main()
{
    int num[10], i, sum = 0;
    float avg;
    printf("enter 10 numbers\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + num[i];
        avg = (float)sum / 10;
        printf("Average=%f", avg);
    }
}