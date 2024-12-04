#include <stdio.h>

float temp(int);

float temp(int x){
    return (1.8*x)+32;
}

int main(){
    float c;
    printf("Enter the temperature: ");
    scanf("%f", &c);

    printf("Conversion of %.2f of celcius in fahrenite is %f", c, temp(c));

    return 0;
}