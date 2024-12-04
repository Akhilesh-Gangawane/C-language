#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    printf("Choose 0 for stone 1 for paper, 2 for scissor\n");
    int MyInput;
    printf("Enter you're input: ");
    scanf("%d", &MyInput);
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number
    int randomNumber = (rand() % 2)+1;

    // Print the random number
    printf("Random Number: %d\n", randomNumber);

    

    return 0;
}
