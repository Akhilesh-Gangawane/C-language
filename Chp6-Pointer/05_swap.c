#include <stdio.h>

void swap(int* , int*);

void swap(int* x, int* y){
    int temp;
    temp= *x;
    *x= *y;
    *y= temp; 
}

int main(){
    int a=5, b=4;
    swap(&a, &b);
    printf("The sum of swaped value is %d\n", a+b);
    printf("%d\n", a);
    printf("%d\n", b);
}