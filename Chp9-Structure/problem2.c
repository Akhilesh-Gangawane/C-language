#include <stdio.h>

struct vector
{
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector v3={(v1.i+ v2.i), (v2.j+v1.j)};
    return v3;
};


int main()
{
    struct vector v1 = {1, 2}, v2 = {3, 4};
    struct vector v3= sumVector(v1, v2);
    printf("The sum of vector %di + %dj", v3.i, v3.j);
    return 0;
}