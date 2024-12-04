#include <stdio.h>

typedef struct employee
{
    int salary;
    float score;
}emp;


int main(){
    emp e1;
    emp* ptr=&e1;
    ptr->salary=56; 
    ptr->score=89.369;  
    // (*ptr).salary=56; 

    printf("The value of score of salary is %d and score is %f", ptr->salary, ptr->score);
    return 0;
}