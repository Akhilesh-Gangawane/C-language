#include <stdio.h>

struct vector
{
    int i;
    int j;
};

struct vector vectorSum(struct vector v1, struct vector v2)
{
    struct vector v3={(v1.i+v2.i), (v1.j+v2.j)};
    return v3;
};



int main(){
    struct vector v1={1,8}, v2={6,7};
    struct vector v3= vectorSum (v1, v2);
    printf("The addition of vector is %di+%dj", v3.i, v3.j);
    return 0;
}