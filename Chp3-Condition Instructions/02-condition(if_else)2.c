#include<stdio.h>

int main(){
    int age;
    printf("Enter you're age ");
    scanf("%d",&age);

    if (age%5==0) //multiple if statement are allowed
    {
        printf("Congragulation you are the part of 5's remainder club\n");
    }

    if (age%10==0) //you use if only even without else
    {
        printf("OH WAIT shit you are divisible by 5 but 10 and 2 are also their so NOT ALLOWED");
    }
    

    else
    {
        printf("OOPS! sorry you are not allowed\n");
        printf("You're age is not divisible by 5");
    }
    
    return 0;
    
    
}