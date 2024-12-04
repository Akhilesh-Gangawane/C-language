#include <stdio.h>

int main()
{
    int arr[3][10];
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                arr[i][j] = num1 * (j + 1);
            }

            else if (i == 1)
            {
                arr[i][j] = num2 * (j + 1);
            }

            else if (i == 2)
            {
                arr[i][j] = num3 * (j + 1);
            }
        }
    }

    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 10; n++)
        {
            printf("%d ", arr[m][n]);
        }
        printf("\n");
    }

    return 0;
}