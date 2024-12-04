#include<stdio.h>

int main(){
    int income;
    float tax=0;
    printf("Enter you're income: ");
    scanf("%d", &income);

    if (income<=250000)
    {
        tax=0;
    }
    else if (income>250000 && income<=500000)
    {
        tax=0.05*(income-250000);
    }
    else if (income>500000 && income<=1000000)
    {
        tax=(0.05*(500000-250000))+(0.2*(income-500000));
    }
    else if (income>1000000)
    {
        tax=(0.05*(500000-250000))+(0.2*(1000000-500000))+(0.3*(income-1000000));
    }
    
    printf("Tax that has to be paid by you is: %f", tax); //if you write %.2f then you will get decimal value until 2 digit
    return 0;
    
}