//write a programto accept the radius of a circle and print area and perimeter.
#include <stdio.h>
void main()
{
    float r, area, perimeter;
    printf("enter radius: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;

    printf("Area=%f,Perimeter=%f\n", area,  perimeter );
}