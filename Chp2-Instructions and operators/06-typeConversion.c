    // int and int -> int
// 5/2 remainder is 2 and 2/5 is zero as it is not integer

    // int and float -> float
// 5.0/2 remainder is 2.5

    // float and float -> float
// 5.0/2.0 remainder is 2.5
    
    //int a=2.521 output is 2(demotion)
    
#include<stdio.h>

int main(){
    int a=9;
    int b=2;
    float c=a/b;

    printf("the value of a/b is %f", c); //outcome is 4.000000 but the actual answer is 4.5 but this is because variable a, b are in variable's operands is in int form
    
    return 0;
}