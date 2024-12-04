#include <stdio.h>
#include <string.h>

void encrpyt(char str[]);

void encrpyt(char str[]){
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;
    }

    // return str;
    
}


int main(){
    char name[]="Tanmay is my room partner";

    encrpyt(name);

    printf("%s", name);
    return 0;
}