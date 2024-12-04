#include <stdio.h>

float avg(int, int, int);

float avg(int x, int y, int z){
    return (x+y+z)/3;
}

int main(){
    float a, b, c;
    
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter first number: ");
    scanf("%f", &b);
    printf("Enter first number: ");
    scanf("%f", &c);

    printf("Avgerage is %.2f",avg(a,b,c));


}