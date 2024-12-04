#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Gangawane.txt", "w");

    // write mode clear the file and then add new data to the file
    int num = 45;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}