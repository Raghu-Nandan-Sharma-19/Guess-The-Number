#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number between a given range
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to play the guess the number game
void playGuessTheNumberGame() {
    const int minNumber = 1;
    const int maxNumber = 100;
    const int targetNumber = generateRandomNumber(minNumber, maxNumber);
    
    int guess;
    int attempts = 0;

    printf("Welcome to Guess the Number Game!\n");
    printf("I have selected a number between %d and %d. Try to guess it!\n\n", minNumber, maxNumber);

    do {
        // Get user input
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Check if the guess is correct, too low, or too high
        if (guess == targetNumber) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts + 1);
            break;
        } else if (guess < targetNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        attempts++;
    } while (1);
}

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Call the function to play the game
    playGuessTheNumberGame();

    return 0;
}
