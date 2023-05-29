#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int number, guess;
    srand(time(0));  // Seed the random number generator
    number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Welcome to the Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == number) {
            printf("Congratulations! You guessed the correct number.\n");
            break;
        } else if (guess < number) {
            printf("Too low. Try again.\n");
        } else {
            printf("Too high. Try again.\n");
        }
    } while (1);

    return 0;
}
