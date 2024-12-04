#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("akhilesh.txt", "r");
    
    if (ptr == NULL)
    {
        printf("Sorry this file does not exist.\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("THe value that is getting read has value %d\n", num);
    }
    fclose(ptr); 
    return 0;
}