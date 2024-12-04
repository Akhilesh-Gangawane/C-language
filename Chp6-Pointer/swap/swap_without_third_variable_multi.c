#include <stdio.h>

void swap(int* ,int* );

void swap(int* x,int* y){
    *y=*x * *y;
    *x=*y / *x;
    *y=*y / *x;
}

int main(){
    int a,b;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    swap(&a, &b);

    printf("Swaped first number: %d\n", a);
    printf("Swaped second number: %d\n", b);

    
}