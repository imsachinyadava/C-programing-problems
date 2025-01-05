/*
Q4.  Write a program to sum first ten natural numbers using ‘for’ loop
*/
#include <stdio.h>

int main()
{
    int i, m;
    i = 1;
    m = 0;
    for (i = 0; i <= 10; i++)
    {
        m = i + m;
    }
    printf("Sum first ten natural numbers is %d", m);
    return 0;
}

// FOLLOW ME :)
