#include <stdio.h>

int main() {
    float marks;
    char grade;

    // Input marks
    printf("Enter your marks: ");
    scanf("%f", &marks);

    // Determine grade
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80 && marks < 90) {
        grade = 'B';
    } else if (marks >= 70 && marks < 80) {
        grade = 'C';
    } else if (marks >= 60 && marks < 70) {
        grade = 'D';
    } else if (marks >= 50 && marks < 60) {
        grade = 'E';
    } else if (marks < 50) {
        grade = 'F'; // F for fail
    } else {
        printf("Invalid marks entered.\n");
        return 0; // Exit the program
    }

    // Output grade
    printf("Your grade is: %c\n", grade);

    return 0;
}
