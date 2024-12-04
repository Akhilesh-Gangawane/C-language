#include <stdio.h>

int main(){
    char name[]="Akhi"; /* char s[]={'A', 'K', 'H', 'I', 'L', '\0'}; */
    for (int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
    {
        printf("%c", name[i]);
    }
    
    return 0;
}