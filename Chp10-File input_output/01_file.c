#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("akhilesh.txt", "r");
    
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value that is getting read is %d\n", num);
    
    fscanf(ptr, "%d", &num);
    printf("The value that is getting read is %d\n", num);
    
    fscanf(ptr, "%d", &num);
    printf("The value that is getting read is %d\n", num);

    fclose(ptr);
    
    
    return 0;
}