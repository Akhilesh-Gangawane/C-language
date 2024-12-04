#include <stdio.h>

float Volume(float);

float Volume(float r){
    float vol=(4.0/3.0)*3.145*(r*r*r);
    printf("The volume of sphere is %f", vol);
    // return vol;
}

int main(){
    float a;
    printf("Enter the radius: ");
    scanf("%f", &a);

    Volume(a);

    return 0;
}

