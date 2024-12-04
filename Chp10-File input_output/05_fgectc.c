#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("gangg.txt", "r");
    char c = fgetc(ptr);
    // fgetc allows the user to print the first alphabet of the file
    printf("%c", c);
    return 0;
}
