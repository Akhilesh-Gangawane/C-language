// Do while loop is different from while loop, in while the condition has to satisfy first, but in do-while loop the operation inside do will run and then it wil check the condition of in while statement 

#include <stdio.h>

int main(){
    int i=0;
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i<5);
    
}