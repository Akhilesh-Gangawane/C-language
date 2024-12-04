//Table of 10 in reverse

#include <stdio.h>

int main(){
    int a=10;
    for (int i = 10; i > 0; i--)
    {
        printf("%d x %d = %d\n", a, i, a*i);    
    }
    
}