#include <stdio.h>

float force(float);

float force(float x){
    return x*9.8;
}

int main(){
    float a;
    printf("Enter your mass: ");
    scanf("%f", &a);

    printf("Force experienced is %f", force(a));

    return 0;
}