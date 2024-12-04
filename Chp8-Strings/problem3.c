#include <stdio.h>

char* slice(char str[],int m,int n);


char* slice(char str[],int m,int n){
    int i=0, count;
    char *ptr1=&str[m];
    char *ptr2=&str[2];
    
    str=ptr1;
    str[n]='\0';
    return str;
}

int main(){
    char str[]="Akhilesh";
    printf("%s", slice(str, 1, 6));
    return 0;
}