#include <stdio.h>
#include <string.h>


int main(){
    int a=strcmp("apple", "zebra"); //it checks which comes first in dictionary if first element come then neagative value or else positive value
    int b=strcmp("zebra", "apple");

    printf("first %d\n", a);
    printf("second %d", b);
    return 0;
}