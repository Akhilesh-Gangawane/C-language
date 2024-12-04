#include <stdio.h>
#include <string.h>

int main(){
    char arr1[]="Akhi";
    char arr2[]="lesh";
    char arr3[]="Gangawane";

    printf("%s %s\n", arr1, arr2);
    strcpy(arr1, arr2); // it copy the value arr2 to arr1
    printf("%s %s", arr1, arr2);

    return 0;
}