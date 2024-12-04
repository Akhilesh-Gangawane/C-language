#include <stdio.h>

int sum(int, int);

int sum(int x, int y)
{
    printf("%d", x + y);
}

int main()
{
    int a, b;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the number: ");
    scanf("%d", &b);
 
    sum(a, b);
}