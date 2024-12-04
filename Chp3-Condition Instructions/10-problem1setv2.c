#include <stdio.h>

int main()
{
    float Sub1, Sub2, Sub3;
    printf("Enter you're marks in Subject 1: ");
    scanf("%f", &Sub1);
    printf("Enter you're marks in Subject 2: ");
    scanf("%f", &Sub2);
    printf("Enter you're marks in Subject 3: ");
    scanf("%f", &Sub3);
    float TotalMarks = Sub1 + Sub2 + Sub3;

    if (Sub1 < 33 || Sub2 < 33 || Sub3 < 33)  // || is , here
    {
        printf("You FAILED the exam due to individual subject marks\n");
    }
    else if ((TotalMarks) / 3 < 40)
    {
        printf("You FAILED the exam due to overall marks\n");
    }
    else
    {
        printf("You have PASSED you're exam");
    }

    return 0;
}