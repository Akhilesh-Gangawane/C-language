#include <stdio.h>

int sum(int* , int* );
int sum(int* x, int* y){
    *x = 15;
    return *x + *y;
}

int main(){
    int a=1, b=5;
    printf("The value of a is %d\n", a);

    printf("The sum of values is %d\n", sum(&a, &b)); //add & here is very important
    printf("The value of a is %d\n", a);

    /* Usually the value of main function can't be changed through the operator 
    so we have to add '*' and '&' symbol here */

    /* After entering the loop it changes but before that it remains same */

}