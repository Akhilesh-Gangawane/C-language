#include <stdio.h>

// here word break end the operation that execute all the codes below it also

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("You entered 1");
        break;
    case 2:
        printf("You entered 2");
        break;
    case 3:
        printf("You entered 3");
        break;
    case 4:
        printf("You entered 4");
        break;
    case 5:
        printf("You entered 5");
        break;

    default:
        printf("Invalid Input");
        break;
    }

    return 0;
}