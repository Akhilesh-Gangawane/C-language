#include<stdio.h>

int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);
    int leapYear= year%4;

    if (leapYear==0 && leapYear%10!=0 || year%400==0)
    {
        printf("%d is a leapyear", year);
    }
    else
    {
        printf("%d is not a leapyear", year);
    }
    
    return 0;
    
}