//write a program to calculate distance for given speed and time .
#include<stdio.h>
int main()
{
    int speed ,time ,distance;
    printf("enter the value of speed and time ");
    scanf("%d%d",&speed,&time);
    distance= time*speed;
    printf("\adistence=%d\n",distance);
}