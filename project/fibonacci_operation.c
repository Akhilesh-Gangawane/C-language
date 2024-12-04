#include <stdio.h>

int fibonacci(int);
int fibonacci(int n){
    if (n==1 || n== 0)
    {
        return n;
    }

    return fibonacci(n-1)+fibonacci(n-2);
    
}

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    printf("%d", fibonacci(a));

    return 0;
}