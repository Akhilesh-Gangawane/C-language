#include <stdio.h>

int factorial(int);

int factorial(int x)
{
    if (x == 1 || x == 0) // base line
    {
        return 1;
    }

    return factorial(x - 1) * x;
}

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    printf("Factorial of %d is %d", a, factorial(a));

    return 0;
}