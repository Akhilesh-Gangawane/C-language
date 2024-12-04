#include <stdio.h>

int main(){
    int a,b;
    
    printf("The value of a ");
    scanf("%d",&a);
    
    printf("The value of b ");
    scanf("%d",&b);

    a>b?printf("a is greater"):printf("b is greater");

    return 0;
    
}

// this is how you can write if else programmme in short
// ? and : are ternary

// ? is 'if'
// : is 'else'