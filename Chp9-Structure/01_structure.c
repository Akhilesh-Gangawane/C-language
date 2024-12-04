
/* Why we build structures?
Ans:- Structure keeps the data organized.
Ans:- Structure make the data management easy for the programmer.*/

/* We can create the data types in the employee structure separately but when the number of properties in a structure 
separately but when the number of properties in a structure increases, it becomes difficult for us to create data variable
without structure */

#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    
    struct employee e1, e2;
    e1.code=98;
    e1.salary=5.85;
    // e1.name="Akhilesh";
    // e1.salary=785445; can't be written this way you can't assign value to any char in c lang to a declared variable.
/* to do so we first have to include string library. */

    strcpy(e1.name, "Akhilesh");/* it is used only for string data type of structure */

    printf("%d %f %s", e1.code, e1.salary, e1.name);

    return 0;
}