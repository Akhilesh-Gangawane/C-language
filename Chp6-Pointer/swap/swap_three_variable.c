#include <stdio.h>

void swap(int* ,int* , int*);

void swap(int* x,int* y, int* z){
    int temp;
    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main(){
    int a, b, c;
    
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);


    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);
    printf("Third number: %d\n", c);

    swap(&a, &b, &c);

    printf("Swaped first number: %d\n", a);
    printf("Swaped second number: %d\n", b);
    printf("Swaped third number: %d\n", c);

    
}