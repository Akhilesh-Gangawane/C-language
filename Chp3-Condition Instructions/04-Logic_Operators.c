// Logical Operators

// && is AND-> is true when both the conditions are true
// a. 1 and 0 is evaluated as false(0)
// b. 0 and 0 is evaluated as true(1)
// c. 1 and 1 is evaluated as true(1)

// || is OR->is true when at least one of the condition is true.
// a. 1 or 0 is true(1)
// b. 1 or 1 is true(1)

// ! is NOT
// a. !(3==3)->evaluates as false(0)
// b. !(3>30)->evaluates as true(1)

// In lay mans language 1 is true and 0 is false 

#include <stdio.h>

int main()
{
    int a, b;
    
     printf("The value of a is ");
     scanf("%d", &a);
    
     printf("The value of b is ");
     scanf("%d", &b);
    
    printf("The value of a and b means a&&b is %d\n", a && b);
    printf("The value of a or b means a||b is %d\n", a || b);
    printf("The value of not of a means !a is %d\n", !a); //value of not of a is opposite of input value like if a is 1 then output is 0
    printf("The value of not of b means !b is %d\n", !b); //not wala output, input ka ulta hota hai 

    return 0;
}

  