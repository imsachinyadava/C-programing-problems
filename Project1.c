/*
PROJECT 1: NUMBER GUESSING GAME

We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guessed_number, i;
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    i = 0;
    do
    {
        printf("Guess the number:\n");
        scanf("%d", &guessed_number);
        i++;
        if ( guessed_number >random_number)
        {
            printf("Lower number please\n");
        }
        else
        {
            printf("Higher number please\n");
        }
    } while (guessed_number!=random_number);
    printf("You guessed it in %d guesses", i);
    return 0;
}

// FOLLOW ME :)