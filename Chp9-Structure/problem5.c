#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
}complex;


int main(){
    complex c={1,2};
    printf("%d + i%d", c.real, c.imaginary);
    return 0;
}