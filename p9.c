// write a program to find the area and perimeter of a ractangle
#include <stdio.h>
void main()
{
    int L,B,Area,Perimeter;

    printf("Enter the value of L and B: ");
    scanf("%d%d",&L,&B);

    Area = L*B;
    Perimeter = 2 *(L+B);

    printf("\a Area =%d ,Perimeter =%d\n",Area,Perimeter );
}