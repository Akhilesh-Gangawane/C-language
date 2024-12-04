#include <stdio.h>

int main(){
    int array[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value at array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
        
    }

    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 4; n++)
        {
            printf("The value at array[%d][%d] is %d\n", m, n, array[m][n]);
        }
        
    }

    
    
}