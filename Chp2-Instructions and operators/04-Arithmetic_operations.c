// x+y=z
// x,y is operands; =+ are operators; z is result

#include <stdio.h>

int main()
{
    int a = 5; //even negative sign is applicable here
    int b = 3;
    int c = a + b;
    printf("the value of a is %d and the value of b is %d so value of c is sum of both the variable that is %d\n", a, b, c);
    // you can do this with addition, substraction, multiplication, division
 
    // let's study about modulus, modulus gives us the remainder of a divided by b and you can write it as a%b
    printf("the value of remainder a is divided by b is %d", a % b);
    return 0;
}