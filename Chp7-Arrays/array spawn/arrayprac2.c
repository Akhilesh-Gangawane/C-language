#include <stdio.h>

int main(){
    int marks[]= {24, 25, 30, 9, 85};
    int* ptr= &marks[0];

    for (int i = 0; i < 5; i++)
    {
        printf("Number at index value %d is %d\n", i+1, *ptr);
        ptr++;
    }
    
}