#include <stdio.h>

int main(){
    int j=0;
    int arr[4]={-1, 2, 3, -9};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i]>0)
        {
            j++;
        }
        
    }
    
    printf("%d", j);

    return 0;
}