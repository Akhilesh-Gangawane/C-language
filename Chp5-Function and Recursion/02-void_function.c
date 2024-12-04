#include <stdio.h>

void display(); // void is used when non integer value is registered, it won't return anything

void display()
{
    printf("Hi I'm void");
}

int main()
{
    display();
    return 0;
}