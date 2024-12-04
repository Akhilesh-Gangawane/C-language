#include<stdio.h>

// by putting else if statement you are reducing burden on the system in this case if 
// first case has  fulfilled the requirement then machine don't run the commands 
// below it and directly jump to line no.31

int main(){
    int age;
    printf("Enter you're age ");
    scanf("%d",&age);

    if (age>50)
    {
        printf("You're can drive but drive safely you are senior citizen");
    }

    else if (age>30)
    {
        printf("You can drive but drive safely as you're are provider for you're family");
    }

    else if (age>=18)
    {
        printf("You are eligible for driving");
    }
    
    else //last else can be optional
    {
        printf("You can't drive");
    }
 // last else executes when all above condition fails
    return 0;
    
    
}