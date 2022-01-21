// sum of sinx series
#include<stdio.h>
int main()
{
    int n,i,fact,j,sign=-1;
    float x,p,sum=0;
    printf("enter the value of x: ");
    scanf("%f",&x);
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        p=1;
        fact=1;
        for(j=1;j<=i;j++)
        {
            p=p*x;
            fact=fact*j;
        
        }
        sign=-1*sign;
        sum=sum+sign*p/fact;
    }
    printf("sum=%f",sum);
    return 0;
}