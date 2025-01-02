/*
Q9.  Write a program to check whether a given number is prime or not using loops.
*/

#include <stdio.h>

int main()
{
    int n, i, m = 1;
    printf("Enter the number:\n");
    scanf("%d", &n);
    i = n - 1;
    if (n <= 1)
    {
        printf("Entered number is not a prime number");
    }
    else
    {
        while (i > 1)
        {
            if (n % i == 0)
            {
                m = 0;
                break;
            }
            i = i - 1;
        }
        if (m == 0)
        {
            printf("Entered number is not a prime number");
        }
        else if (m == 1)
        {
            printf("Entered number is a prime number");
        }
    }
    return 0;
}

// FOLLOW ME :)