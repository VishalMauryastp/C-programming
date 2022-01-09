// Write a program to find the given number Armstrong number or not.
#include <stdio.h>
void main()
{
    int n, i, temp, Armstorng_No;
v:
    printf("enter number:  ");
    scanf("%d", &n);
    Armstorng_No = 0;
    temp = n;
    while (n > 0)
    {
        Armstorng_No = Armstorng_No + ((n % 10) * (n % 10) * (n % 10));
        n = n / 10;
    }
    if (temp == Armstorng_No)
    {
        printf("Armstorng_No\n");
    }
    else
    {
        printf("The number entered by you is not an Armstorng_No\n");
        goto v;
    }
}