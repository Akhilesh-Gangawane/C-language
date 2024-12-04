#include <stdio.h>

int main(){
    
    int array[3][3];
    
    for (int i = 0; i < 3; i++)
    {
    
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value for array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
        
    }

    for (int m = 0; m < 3; m++)
    {
    
        for (int n = 0; n < 3; n++)
        {
            printf("Enter the value for array[%d][%d] is %d\n", m, n, array[m][n]);
            
        }
        
    }
    
}