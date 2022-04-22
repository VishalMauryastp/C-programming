#include <stdio.h>
void main()
{
    int i, n, facterial = 1;
    printf("Enter the number to find the facterial: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        facterial = facterial * i;
        // printf("%d\n", facterial);
    }
     printf("Factorial %d! is %d.\n",n, facterial);
    
}