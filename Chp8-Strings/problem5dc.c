#include <stdio.h>
#include <string.h>

char decrypt( char str[]);

char decrypt( char str[]){
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]-1;
    }
    
}

int main(){
    char name[1000];
    printf("Enter the code to decrypt: ");
    gets(name);
    decrypt(name);
    printf("The dcrypted message is %s", name);
    return 0;
}