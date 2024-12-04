#include <stdio.h>
#include <string.h>

int main()
{
    char str[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin); //without this enter is counted in the character as \n.
    }
    str[5]='\0';
    printf("%s", str);

    return 0;
}