#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int playagain = 1;
    // Seed the random number generator with current time
    srand(time(NULL));

while (playagain == 1)
{
    
        // Generate a random number between 1 and 1000
        int randomNumber = (rand() % 1000) + 1;

        printf("YAYAYAY GAME\n");
        printf("Guess my number from 1 to 1000!\n");
        int guess;
        printf("Enter your guess: ");
        scanf("%d", &guess);
        int attempts = 1;
    
        while (guess != randomNumber)
        {
            if (guess < 1 || guess > 1000)
            {
                printf("Please enter a number between 1 and 1000.\n");
            }
            else if (guess <= randomNumber - 100)
            {
                printf("Your guess is too low! Guess again\n");
            }
            else if (guess >= 100 + randomNumber)
            {
                printf("Your guess is too high! Guess again\n");
            }
            else if (guess < randomNumber)
            {
                printf("Your guess is low! Guess again\n");
            }
            else if (guess > randomNumber)
            {
                printf("Your guess is high! Guess again\n");
            }
            attempts++;
            printf("Enter your guess: ");
            scanf("%d", &guess);
        }
        if(guess == randomNumber)
        {
            printf("Congratulations! You guessed the number %d correctly in %d tries!\n", randomNumber, attempts);
        }
            printf("Do you want to play again? (1 for yes, 0 for no): ");
            scanf("%d", &playagain);
    
}

    if (playagain == 0) {
        printf("Thank you for playing!\n");
    }
    else if (playagain != 1) {  
        printf("Error: Invalid input. Exiting the game.\n");
    }
    return 0;
}