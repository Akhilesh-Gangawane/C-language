#include <stdio.h>

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    float prod=1;
    int i=a;

    while (i>=1)
    {
        prod*=i;
        i--;
    }
    printf("%.2f", prod);
}