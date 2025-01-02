/*
Q7. Write a program to calculate the factorial of a given number using a for loop.
*/
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number:\n");
    scanf("%d", &n);
    i = 1;
    for (n = n; n > 0; n--)
    {
        i = n * i;
    }
    printf("Factorial of the number is %d", i);
    return 0;
}

// FOLLOW ME :)