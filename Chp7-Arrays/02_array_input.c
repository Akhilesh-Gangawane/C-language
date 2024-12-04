#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter the marks of 5 student\n");

    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);

    printf("Marks 1 is %d\n", marks[0]);
    printf("Marks 2 is %d\n", marks[1]);
    printf("Marks 3 is %d\n", marks[2]);
    printf("Marks 4 is %d\n", marks[3]);
    printf("Marks 5 is %d\n", marks[4]);
}