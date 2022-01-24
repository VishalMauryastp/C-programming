// using loop array manipulation
#include <stdio.h>
void main()
{
    int n[10], i;
    printf("enter array element\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }
    for (i = 0; i <= 9; i++)
        printf("n[%d]=%d\n", i, n[i]);
}
