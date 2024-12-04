#include<stdio.h>

int main(){
    int age;
    printf("Enter you're age ");
    scanf("%d", &age);

    if (age>18)//Here you can use any mathematical operation like +-*/does'nt make any difference
    {
        printf("Welcome customer");
    }
    
    else
    {
        printf("Sorry! you are not allowed");
    }

    return 0;
    
}