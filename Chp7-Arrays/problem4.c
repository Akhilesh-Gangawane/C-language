#include <stdio.h>

int main(){
    int arr[10];
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    for (int i = 0; i < 10; i++)
    {
        arr[i]=a*(i+1);
    }
    
    for (int j = 0; j < 10; j++)
    {
        printf("%d\n", arr[j]);
    }
    

    return 0;
}