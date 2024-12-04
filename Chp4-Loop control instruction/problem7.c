#include <stdio.h>

int main(){
    int a=8, sum=0;

    for (int i = 1; i <= 10; i++)
    {
        sum+=a*i;
    }
    printf("%d", sum);
}