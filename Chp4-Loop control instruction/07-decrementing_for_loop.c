#include <stdio.h>

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    if (a>0)
    {
        for (int i = a; i ; i--)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("ERROR");
    }
    
   
    
}