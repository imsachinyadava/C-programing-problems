/*
Q1. Write a program to print multiplication table of a given number n.
*/
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    i = 1;
    while (i <= 10)
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++; // i=i+1
    }
    return 0;
}

// FOLLOW ME :)
