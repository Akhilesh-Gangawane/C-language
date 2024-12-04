#include <stdio.h>

int main(){
    char i='A';
    
    char* j = &i; //you are assigning the address of i to j(j is a pointer pointing to i)
    char** m= &j; //even the variabele which is used to declare variable has a pointer value the only difference is you have to add two '*'

    printf("The addresses of the variable is %p\n", &i);
    printf("The addresses of the variable integer is %u\n", &i);
    /* '&' symbol refers as address of the variable */

    printf("\tThe addresses of the variable is %p\n", j);
    printf("\tThe addresses of the variable is integer is %u\n", j);
    
    printf("\t\tThe addresses of the variable is %p\n", m);
    printf("\t\tThe addresses of the variable is integer is %u", m);
    

    return 0;
}