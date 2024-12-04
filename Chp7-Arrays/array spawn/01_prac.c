#include <stdio.h>

int main(){
    int marks[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value no.%d: ", i+1);
        scanf("%d", &marks[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        printf("Enter %d value is: %d\n", j+1, marks[j]);
    }
    
    
}