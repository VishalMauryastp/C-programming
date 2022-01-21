#include <stdio.h>
#include <conio.h>
int compute(int, int);
int main()
{
    int digit1 = 100, digit2 = 500,answer;
    answer=compute(digit1,digit2);
    printf("\n the largest no in %d and %d is %d\n", digit1, digit2,answer);
    getch();
}
int compute(int num1, int num2)
{
    if (num1 > num2)
        return (num1);
        else
        return (num2);

}
