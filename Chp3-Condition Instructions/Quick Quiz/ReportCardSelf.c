#include<stdio.h>

// here else if is used to break the reading of below programme

int main(){
    char grade;
    float marks;
    printf("Enter you're marks: ");
    scanf("%f", &marks);

    if (marks>=90 && marks<=100)
    {
        grade='A';
    }

    else if (marks>=80 && marks<90)
    {
        grade='B';
    }
    
    else if (marks>=70 && marks<80)
    {
        grade='C';
    }
    
    else if (marks>=60 && marks<70)
    {
        grade='D';
    }

    else if (marks>=50 && marks<60)
    {
        grade='E';
    }

    else if (marks<50)
    {
        grade='F';
    }

    else
    {
        printf("Invalid marks");
    }

    printf("You're grades are %c", grade);

    return 0;
    
    
    
    
}