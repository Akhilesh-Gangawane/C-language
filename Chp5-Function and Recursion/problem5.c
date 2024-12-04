#include <stdio.h>

int main(){
    int a=4;
    printf("%d %d %d", a, ++a, a++); //evaluation is done in reverse if same variable is present(if evaluation order not defined)
    //                 6  5->6  4
}