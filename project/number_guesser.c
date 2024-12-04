#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{    
    
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int lower = 1, upper = 100;
    int randomNumber = (rand() % (upper - lower + 1)) + lower;

    int guess;
    int no_of_guess = 0;

    do
    {

        printf("Enter you're number: ");
        scanf("%d", &guess);

        if (guess > randomNumber)
        {
            printf("Guess a small number.\n");
        }
        else if (guess < randomNumber)
        {
            printf("Guess a Big number.\n");
        }

        no_of_guess++;
    } while (guess != randomNumber);

    printf("Perfect guess in %d attempt", no_of_guess);

    return 0;
}
