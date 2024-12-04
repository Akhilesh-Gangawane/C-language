#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("akhu.txt", "a");

    // a is append that allow to add new text at end 
    int num=58;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    
    return 0;
}