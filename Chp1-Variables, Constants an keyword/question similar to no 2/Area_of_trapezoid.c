#include <stdio.h>

int main()
{
    float a, b, h;

    printf("the value of first parallel side is\n");
    scanf("%f", &a);

    printf("the value of second parallel side is\n");
    scanf("%f", &b);

    printf("the value of height between two paralle side is\n");
    scanf("%f", &h);

    printf("the area of trapezoid is %f", (a + b) * h / 2);

    return 0;
}