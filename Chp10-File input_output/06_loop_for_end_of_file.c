#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("loop.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        if (ch == EOF) /* EOF = end of file. */
        {
            break;
        }
    }
    return 0;
}