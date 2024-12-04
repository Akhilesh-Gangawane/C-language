#include <stdio.h>

void Greeting1();
void Greeting2();
void Greeting3();

void Greeting1()
{
    printf("Good Morning\n");
}

void Greeting2()
{
    printf("Good Evening\n");
}

void Greeting3()
{
    printf("Good Night\n");
}

int main()
{
    Greeting1();
    Greeting2();
    Greeting3();
}