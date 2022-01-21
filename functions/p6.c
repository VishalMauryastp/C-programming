// global variable
#include <stdio.h>
int add_number (void);
int num1, num2; //Global varible
void main()
{
    auto int result; //local varible
    num1 = 100;
    num2 = 500;
    result = add_number();
    printf("the sum of numbers is:%d\n", result);
}
int add_number(void)
{
    auto int sum;      // local variable
    sum = num1 + num2; //use of globle varible
    return sum;
}
