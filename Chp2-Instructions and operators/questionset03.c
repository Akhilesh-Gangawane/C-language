#include<stdio.h>

int main(){
    int a;
    printf("type the number for which you want to check the divisibilty\n");
    scanf("%d", &a);

    printf("the divisibility of the number is only when value is zero and the answer is %d", a%97);
    return 0;
}