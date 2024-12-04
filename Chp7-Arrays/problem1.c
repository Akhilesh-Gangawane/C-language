#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("Value is %d\n", *ptr);
        ptr=ptr+2;
    }
}
