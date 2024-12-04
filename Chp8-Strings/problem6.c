#include <stdio.h>
#include <string.h>

int main(){
    int count=0;
    char name[10000];
    printf("Enter the word: ");
    gets(name);
    char c;
    printf("Enter the alphabet of which you want to find the occurence: ");
    scanf("%c", &c);

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i]==c)
        {
            count++;
        }
        
    }
    printf("%d", count);
    

    return 0;
}