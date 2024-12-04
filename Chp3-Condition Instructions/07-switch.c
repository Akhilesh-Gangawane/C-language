#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("You entered 1\n");
    case 2:
        printf("You entered 2\n");
    case 3:
        printf("You entered 3\n");
    case 4:
        printf("You entered 4\n");
    case 5:
        printf("You entered 5\n");
        
    
    default:
        printf("Nothing entered");
        
    } 

    return 0;
}

//here everthing prints if you enter 1 all statement below that are printed as well