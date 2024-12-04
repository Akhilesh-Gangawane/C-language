#include <stdio.h>

int main(){
    int s[3]={1,2,3};
    int* ptr = &s[0];
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *ptr);
        ptr=ptr+3;
    }
    
}
// False