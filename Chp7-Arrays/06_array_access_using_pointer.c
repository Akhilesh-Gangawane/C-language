#include <stdio.h>

int main(){
    int marks[]={24,21,25,29};
    int* ptr= &marks[0]; /* int* ptr= &marks; */
    
    for (int i = 0; i < 4; i++)
    {
        // printf("At index of %d is %d\n", i, marks[i]);
        printf("At index of %d is %d\n", i, *ptr);
        ptr++; /* it increase the bytes that has to printed */
    }
    
}