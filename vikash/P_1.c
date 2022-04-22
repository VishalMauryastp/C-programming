//
#include <stdio.h>
#define SI (P * R * T) / 100
void main()
{
    int i, j;
    float P, R, T;
    printf("Enter the number: ");
    scanf("%f%f%f", &P, &R, &T);
    printf("Interst= %.3f\n", SI);
}