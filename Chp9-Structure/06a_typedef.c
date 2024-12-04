#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[100];
}Emp;

int main(){
    Emp e1;
    e1.code=56;
    e1.salary=85.36;
    strcpy(e1.name, "Akhilesh");

    printf("%s %f %d" , e1.name, e1.salary, e1.code);
    
    return 0;
}