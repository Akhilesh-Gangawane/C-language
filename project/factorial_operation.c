#include <stdio.h>

int factorial(int);

int factorial(int n){
    if (n==1 || n==0)
    {
        return 1;
    }
    
    return factorial(n-1)*n;
}

int main(){
    int a;
    printf("enter the number: ");
    scanf("%d", &a);

    printf("Factoial of %d is %d", a, factorial(a));

    return 0;
}