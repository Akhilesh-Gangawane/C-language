#include <stdio.h>

int main(){

    char s[]={'A', 'K', 'H', 'I', 'L', '\0'}; /* \0 is null character */
    
    for (int i = 0; i < 4; i++)
    {
       printf("%c", s[i]);
    }
    
    return 0;
}