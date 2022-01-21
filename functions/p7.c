// static  varible example
#include <stdio.h>
int print_sum();
int main()
{
    int i;
    for (i = 1; i < 5; i++)
    {
        print_sum();
    }
}
int print_sum()
{
    static int sum = 0;
    sum = sum + 5;
    printf("%d\n", sum);
}