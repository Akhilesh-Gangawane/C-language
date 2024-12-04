#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("fputusakhi.txt", "a");
    // int num=56;
    fputc('h', ptr);
    return 0;
}