#include <stdio.h>

int main(){
    int a;
    printf("Enter the number of elements you want to include: ");
    scanf("%d", &a);
    int arr[a];

    for (int i = a-1; i >= 0; i--)
    {
        printf("Enter the %d element: ", i);
        scanf("%d", &arr[i]);
    }

    for (int j = a-1; j >= 0; j--)
    {
        printf("Entered %d element is: %d\n", j, arr[j]);
    }
    
    

    return 0;
}