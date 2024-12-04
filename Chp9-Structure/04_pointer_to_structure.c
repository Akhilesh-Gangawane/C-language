#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[100];
};

int main(){
    struct employee e1;
    e1.code=67;
    struct employee *ptr;

    ptr=&e1;

    printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code);

    return 0;
}