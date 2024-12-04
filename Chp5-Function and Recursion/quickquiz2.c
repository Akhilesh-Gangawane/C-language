#include <stdio.h>
#include <math.h>

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("The square of %d is %f", a, pow(a,2)); 
 // here %f is written, as is double data type, double data type is float type only but with more precision
}
