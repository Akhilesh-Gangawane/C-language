#include <stdio.h>

int main(){
    int marks[10];

    printf("Enter the marks of 10 students: \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }

    // printf("Marks 1 is %d\n", marks[0]);
    // printf("Marks 2 is %d\n", marks[1]);
    // printf("Marks 3 is %d\n", marks[2]);
    // printf("Marks 4 is %d\n", marks[3]);
    // printf("Marks 5 is %d\n", marks[4]);
    // printf("Marks 6 is %d\n", marks[5]);
    // printf("Marks 7 is %d\n", marks[6]);
    // printf("Marks 8 is %d\n", marks[7]);
    // printf("Marks 9 is %d\n", marks[8]);
    // printf("Marks 10 is %d\n", marks[9]);
    
    for (int j = 0; j < 10; j++)
    {
        printf("Marks at index %d is %d\n", j+1, marks[j]);
    }
    
    
}