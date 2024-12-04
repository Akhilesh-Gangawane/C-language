#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if (a > 1)
    {
        int prime = 1;

        for (int i = 2; i < a; i++)
        {

            if (a % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 0)
        {
            printf("non prime");
        }
        else if (prime == 1)
        {
            printf("prime");
        }
    }

    else if (a == 1 || a == 0)
    {
        printf("%d is special character", a);
    }

    return 0;
}