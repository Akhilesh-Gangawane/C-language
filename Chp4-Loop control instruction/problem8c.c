#include <stdio.h>

int main(){
    int a;
    printf("Enter the number of which you have to find factorial of: ");
    scanf("%d", &a);
    int prod=1;
    int i=a;

    do
    {
        prod*=i;
        i--;
    } while (i>=1);
    printf("%d", prod);
}