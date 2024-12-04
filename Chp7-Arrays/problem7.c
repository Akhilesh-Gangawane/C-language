#include <stdio.h>

int main(){
    int arr[3][10];
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i==0)
            {   
                arr[i][j]=2*(j+1);
            }
            
            else if (i==1)
            {   
                arr[i][j]=7*(j+1);
            }

            else if (i==2)
            {   
                arr[i][j]=9*(j+1);
            }
            
        }
        
    }


    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 10; n++)
        {
            printf("%d ",arr[m][n]);
        }

        printf("\n");
    }
    return 0;
}