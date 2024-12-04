#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if (i==10)
        {
            continue; //This skip the loop at value 10, terminate the itteration
        }
        
       printf("The value of i is %d\n", i);
    }
  
  return 0;   
}