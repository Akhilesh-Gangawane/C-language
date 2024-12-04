#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[100];
}; // semicolon is important


int main(){
    
    struct employee facebook[100]; // an array of structure
    // we can access the data using:

    facebook[0].code=100;
    facebook[1].code=77;
    
    return 0;
}