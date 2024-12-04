#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[100];
};


int main(){

    struct employee e1, e2;
    
    struct employee Akhi={100, 71.22, "Akhilesh"};
    printf("%d %s %f", Akhi.code, Akhi.name, Akhi.salary);
    return 0;
}