/*
Q5. Write a program to sum first ten natural numbers using do-while loop.
*/
#include <stdio.h>

int main()
{
    int i, m;
    i = 1;
    m = 0;
    do
    {
        m = i + m;
        i++;
    } while (i <= 10);
    printf("Sum first ten natural numbers is %d", m);

    return 0;
}

// FOLLOW ME :)
