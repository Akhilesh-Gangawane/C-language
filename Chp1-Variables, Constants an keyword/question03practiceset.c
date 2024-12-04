#include<stdio.h>

int main(){
    float C;

    printf("the value of celcius you want to convert to fahrenheit is ");
    scanf("%f", &C);

    printf("the temperature in fahrenheit is %f", (9.0/5.0)*C+32);   
}