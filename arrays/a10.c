// write a program to find largest element of an array
#include<stdio.h>
#include<conio.h>
int main ()
{
    int a[5],i,larg;
    // clrscr();
    printf("Enter array element\n");
    for ( i = 0; i < 5; i++)
    {
       scanf("%d",&a[i]);
    }
    larg=a[4];
    for ( i = 0; i < 5; i++)
    {
     if (a[i]>larg)  
     larg=a[i];
      printf("The largest element is %d\n",larg);
    }
      getch();
}