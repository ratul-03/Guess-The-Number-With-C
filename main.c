#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int number_of_guess = 0;
    int guessed;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);
    // Taking User Input
    do {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if (guessed > number_of_guess) {
            printf("Too high!\n");
        } else {
            printf("Too low!\n");
        }
        number_of_guess++;
    } while (guessed!=random_number);
    printf("You guess the number in %d guesses: ", number_of_guess);

    return 0;
}
