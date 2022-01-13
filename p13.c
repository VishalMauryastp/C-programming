// write a program to calculate the factorial using function
#include <stdio.h>
void factorial(int);
void main()
{
    int number;
    printf("Enter  Number: ");
    scanf("%d", &number);
    factorial(number);
}
void factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
   {
        fact = fact * i;
        
   }    
    printf("\aFactorial of Number=%d\n", fact);
}