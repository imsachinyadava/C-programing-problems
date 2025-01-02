/*
Q8. Write a program to calculate the factorial of a given number using a while loop.
*/
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number:\n");
    scanf("%d", &n);
    i = 1;
    while (n > 0)
    {
        i = n * i;
        n -= 1; // n=n-1
    }
    printf("Factorial of the number is %d", i);
    return 0;
}

// FOLLOW ME :)