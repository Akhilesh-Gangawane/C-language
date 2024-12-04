#include <stdio.h>

int main()
{
    float base, height;

    printf("the value of the base of the triangle is \n");
    scanf("%f", &base);

    printf("the value of the height of the triangle is \n");
    scanf("%f", &height);

    printf("the total area of triangle is %f", (base * height) / 2);

    return 0;
}