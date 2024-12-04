#include <stdio.h>

int main()
{
    int a, b;
    printf("the value of dividened ");
    scanf("%d", &a);
    printf("the value of divisor ");
    scanf("%d", &b);

    printf("the remainder of the a divided by b is %d", a % b);
    return 0;
}