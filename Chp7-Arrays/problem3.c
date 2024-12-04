#include <stdio.h>

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i]=5*(i+1);
    }

    for (int j = 0; j < 10; j++)
    {
        printf("Table of 5 in array is, %d\n", arr[j]);
    }
    
    
    return 0;
}