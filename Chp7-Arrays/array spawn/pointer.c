#include <stdio.h>

void swap(int* ,int*);

void swap(int* x,int* y){
    int* temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int a=56, b=25;
    swap(&a,&b);
    printf("a = %d", a);
    printf("b = %d", b);

}