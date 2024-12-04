#include <stdio.h>

int main(){
    int i =6;
    int* j= &i;
    int** k=&j;

    printf("Value of i is %d\n", i);
    printf("Value at j variable is %d\n", *j); // * se & cut jata hai.
    printf("Value of is %d\n", *(&i)); //* cuts &
    printf("Value of is %d\n", **(&j)); // j is also 6 as it pointer to pointer so it cancels each other.
}