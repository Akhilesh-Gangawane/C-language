#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if (i==5)
        {
            break; //This exit or break the loop at value 5
        }
        
       printf("The value of i is %d\n", i);
    }
  
  return 0;   
}