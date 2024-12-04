// fuction is a way which helps programmer to separte logic from

#include <stdio.h>

// function prototype
int sum(int, int);

// function definition
int sum(int x, int y) // x and y are parameters
{
    printf("The sum is %d\n", x + y);
    return x + y;
}

int main()
{
    int a = 1, b = 3;

    sum(a, b); // 1,3 are arguments
    return 0;
}