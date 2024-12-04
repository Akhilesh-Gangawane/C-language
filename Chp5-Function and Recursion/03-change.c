#include <stdio.h>

int change(int);

int change(int x){
    x=85; //this won't change as only copy of c comes here not the actual value
    return 0;
}

int main(){
    int c=22;
    printf("%d\n", c);

    change(c);
    printf("%d", c);
}