#include <stdio.h>

int main(){
    int sum=0;
    int i=1;
    do
    {
        sum=sum+i;
        i++;
    } while (i<=10);
    printf("%d", sum);
}