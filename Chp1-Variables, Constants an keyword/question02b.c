// Volume of cylinder

#include<stdio.h>

int main(){
    float r,h;

    printf("the value of radius of cylinder is ");
    scanf("%f", &r);
    
    printf("the value of height of cylinder is ");
    scanf("%f", &h);

    printf("the volume of cylinder is %f", (r*r)*h*3.14);

    return 0;
    

}