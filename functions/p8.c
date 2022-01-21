//  call by value
#include <stdio.h>
#include <conio.h>
void compute(int, int);
int main()
{
    int n1 = 100, n2 = 200;
    compute(n1,n2);
    printf("the value befor calling the function \n");
    printf("n1=%d and n2=%d\n", n1, n2);
}
void compute(int num1, int num2)
{
    num1 = num1 + 100;
    num2 = num2 + 100;
    printf("the value after calling the function \n");
    printf("n1=%d and n2=%d\n", num1, num2);
}