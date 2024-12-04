#include <stdio.h>

int sum_natural(int);

int sum_natural(int n)
{
    return n * (n - 1) / 2;
}

int main()
{
    int a;
    printf("Enter the number till where you have to find sum: ");
    scanf("%d", &a);

    printf("Sum of natural numbers till %d is %d", a, sum_natural(a));

    return 0;
}