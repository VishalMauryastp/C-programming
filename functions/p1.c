// write a program to find the  reverse of number using function .
#include <stdio.h>
/*function prototype*/
int reverse(int);
void main()
{
    int n, r;
    printf("Enter the value of n:  ");
    scanf("%d", &n);
    r = reverse(n); /* function called here */
    printf("Reverse of %d is %d\n", n, r);
}
int reverse(int p)
{  int d,  rev_of_p=0;
    // while(p>0)
    {
    //    d = p % 10; 
        for (p > 0; d = p % 10; p = p / 10)
         rev_of_p= rev_of_p* 10 + d;
            // p=p/10;
    }
    return (rev_of_p);
}