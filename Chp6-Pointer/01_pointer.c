#include <stdio.h>

int main(){
    int i=72;
    
    int* j = &i; //you are assigning the address of i to j(j is a pointer pointing to i)
    int** m= &j; //even the variabele which is used to declare variable has a pointer value the only difference is you have to add two '*'(called as pointer to pointer)

    printf("The addresses of the variable is %p\n", &i);
    printf("The addresses of the variable integer is %u\n", &i);
    /* '&' symbol refers as address of the variable */

    printf("The addresses of the variable is %p\n", j);
    printf("The addresses of the variable is integer is %u\n", j);
    
    printf("The addresses of the variable is %p\n", m);
    printf("The addresses of the variable is integer is %u", m);
    

    return 0;
}