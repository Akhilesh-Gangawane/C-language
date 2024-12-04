#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} complex;

void display(complex c)
{
    printf("%d + i%d\n", c.real, c.imaginary);
}

int main()
{
    complex arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of real number: ");
        scanf("%d", &arr[i].real);
        printf("Enter the value of imaginary number: ");
        scanf("%d", &arr[i].imaginary);
    }
    for (int i = 0; i < 5; i++)
    {
        display(arr[i]);
    }

    return 0;
}