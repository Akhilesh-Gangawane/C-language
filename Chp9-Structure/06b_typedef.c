#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    char name[100];
    float salary;
} emp;

int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    e1.code = 454;
    e1.salary = 89.6352;
    strcpy(e1.name, "Akhilesh");

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", (*ptr).code, (*ptr).salary, (*ptr).name);
    printf("%d %f %s\n", ptr->code, ptr->salary, ptr->name);

    return 0;
}