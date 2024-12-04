#include<stdio.h>

int main(){
    
    float P,T,R;

    printf("principle amount of loan is ");
    scanf("%f", &P);

    printf("time of loan is ");
    scanf("%f", &T);

    printf("Rate of interest of loan in months term is ");
    scanf("%f", &R);

    printf("The simple interest of the loan is %f", P*T*(R/100));

    return 0;

}