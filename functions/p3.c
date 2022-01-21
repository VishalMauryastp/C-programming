#include <stdio.h>
#include <conio.h>
int compute(int, int);
int main()
{
    int digit1 = 100, digit2 = 500, answer;
    answer = compute(digit1, digit2);
    printf("sum=%d\n", answer);
    getch();
}
int compute(int num1, int num2)
{
    return (num1 + num2);
}
