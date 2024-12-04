#include <stdio.h>

int main()
{
    int a = 45;
    int *ptr = &a;

    printf("the address of integer variable is %u\n", &a);
    printf("the address of integer variable is %u\n", ptr);

    ptr++; // it will increase the value of ptr by number bytes took by the data type here(int) require 4bytes.
    printf("the increased address of integer variable is %u\n", ptr);
    /* Even additon or substraction of this pointers will change the value of pointer by number of bytes it has taken */


    char name = 'A';
    char *ptrch = &name;

    printf("The address of char type is %u\n", &name);
    printf("The address of char type is %u\n", ptrch);

    ptrch++; // it will increase the value of ptr by number bytes took by the data type here(cahr) require 1bytes.
    printf("The increased address of char type is %u\n", ptrch);
}