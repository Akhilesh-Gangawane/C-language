#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){

    if (n==0 || n==1)
    {
        return n;
    }
    
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("%d", fibonacci(a));
}