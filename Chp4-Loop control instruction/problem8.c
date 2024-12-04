#include <stdio.h>

int main(){
    int a;
    float fact=1;
    printf("Enter the number of which you have to find factorial of: ");
    scanf("%d", &a);

    for (int i = a; i>=1 ; i--)
    {
        fact*=i;
    }
    printf("The factorial of %d is %f", a, fact);
  
//   return 0;

}