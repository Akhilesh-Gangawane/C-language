#include <stdio.h>

int main()
{

    float Sub1, Sub2, Sub3;
    printf("Marks in Subject 1: ");
    scanf("%f", &Sub1);
    if (Sub1 >= 33)
    {
        printf("Pass\n");
    }
    else if (Sub1 < 33)
    {
        printf("fail\n");
    }
    else
    {
        printf("Invalid input");
    }
    

    printf("Marks in Subject 2: ");
    scanf("%f", &Sub2);
    if (Sub2 >= 33)
    {
        printf("Pass\n");
    }
    else if (Sub2 < 33)
    {
        printf("fail\n");
    }
    else
    {
        printf("Invalid input");
    }
    

    printf("Marks in Subject 3: ");
    scanf("%f", &Sub3);
    if (Sub3 >= 33)
    {
        printf("Pass\n");
    }
    else if (Sub3 < 33)
    {
        printf("fail\n");
    }
    else
    {
        printf("Invalid input");
    }
    

    float TotalMarks = Sub1 + Sub2 + Sub3;
    float percentage = (TotalMarks / 300) * 100;
    printf("You're total percentage is %f\n", percentage);
    if (percentage >= 40)
    {
        printf("You passed overall");
    }
    else if (percentage < 40)
    {
        printf("You failed overall");
    }

    return 0;
}