#include <stdio.h>

int main(){
    int a, b, sum=0;
    printf("Enter the table number: ");
    scanf("%d", &a);
    printf("Enter the limit: ");
    scanf("%d", &b);

    for (int i = 0; i <= b; i++)
    {
        sum+=a*i;
    }
    printf("you're chosen table was %d till limit %d and the answer is %d", a, b, sum);

    return 0;
}