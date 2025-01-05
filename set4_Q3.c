/*
Q3.Write a program to sum first ten natural numbers using while loop.
*/
#include <stdio.h>

int main()
{
    int i, m;
    i = 1;
    m = 0;
    while (i <= 10)
    {
        m = i + m;
        i++;
    }
    printf("Sum first ten natural numbers is %d", m);
    return 0;
}

// FOLLOW ME :)