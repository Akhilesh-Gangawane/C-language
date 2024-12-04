#include <stdio.h>

int sum(int, int);

int sum(int x, int y){
    return x+y;
}

int main(){
    int a=1,b=4;
    int c=sum(a,b);

    printf("%d", c); //this is called 'function call'
}