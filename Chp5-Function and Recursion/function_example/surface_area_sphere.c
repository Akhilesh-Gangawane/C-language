#include <stdio.h>

float area(float);

float area(float r){
    float formula= 4*(22.0/7.0)*r*r;
    printf("The surface area of sphere of radius %f is %f", r, formula);
    return formula;
}

int main(){
    int a;
    printf("Enter the radius: ");
    scanf("%d", &a);

    area(a);

    return 0;
}