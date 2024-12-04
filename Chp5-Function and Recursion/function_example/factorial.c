#include <stdio.h>

int facto(int);

int facto(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }

    return facto(x - 1) * x;
}

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("The factorial of %d is %d", a, facto(a));

    return 0;
}