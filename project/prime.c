#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    int prime = 1;

    if (a>1)
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
        {
            printf("The number is prime");
        }
        else
        {
            printf("The number is non-prime");
        }
    }

    else if (a==0 || a==1)
    {
        printf("Special character");    
    }
    
}