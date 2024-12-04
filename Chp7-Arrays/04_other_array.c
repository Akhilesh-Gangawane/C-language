#include <stdio.h>

int main(){
    int cgpa[3]={1,2,3};
    // int cgpa[]={1,2,3}; even this is applicable

    for (int j = 0; j < 3; j++)
    {
        printf("value of array at index %d is %d\n", j+1, cgpa[j]);
    }
}