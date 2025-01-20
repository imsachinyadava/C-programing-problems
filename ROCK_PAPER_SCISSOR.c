/*
                        PROJECT 2: ROCK, PAPER, SCISSOR

ROCK, PAPER, SCISSOR is a game most of us have played during
school time. (I sometimes play it even now).
Write a C program capable of playing this game with you.
Your program should be able to print the result after you choose ROCK, PAPER OR SCISSOR.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char input;
    char random_character;
    printf("Enter \na for ROCK\nb for PAPER\nc for SCISSOR\n");
    do
    {
        srand(time(0));
        random_character = 'a' + (rand() % 3);
        scanf(" %c", &input);
        if (random_character == input)
        {
            if (random_character == 'a')
                printf("I choose ROCK\n");
            else if (random_character == 'b')
                printf("I choose PAPER\n");
            else
                printf("I choose SCISSOR\n");
            if (input == 'a')
                printf("You choose ROCK\n");
            else if (input == 'b')
                printf("You choose PAPER\n");
            else
                printf("You choose SCISSOR\n");
            printf("Lets Try Again!\n");
        }
    } while (random_character == input);
    if (random_character == 'a')
        printf("I choose ROCK\n");
    else if (random_character == 'b')
        printf("I choose PAPER\n");
    else
        printf("I choose SCISSOR\n");
    if (input == 'a')
        printf("You choose ROCK\n");
    else if (input == 'b')
        printf("You choose PAPER\n");
    else
        printf("You choose SCISSOR\n");
    if (random_character == 'a' && input == 'b')
    {
        printf("You WON!");
    }
    else if (random_character == 'b' && input == 'c')
    {
        printf("You WON!");
    }
    else if (random_character == 'c' && input == 'a')
    {
        printf("You WON!");
    }
    else
    {
        printf("You LOOSE!");
    }
    return 0;
}
