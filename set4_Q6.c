/*
Q6. Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/
#include <stdio.h>

int main()
{
    int n, i, m;
    i = 1;
    n = 0;
    while (i <= 10)
    {
        m = 8 * i;
        n = m + n;
        i++;
    }
    printf("Sum of the numbers occurring in the multiplication table of 8 is %d", n);
    return 0;
}

// FOLLOW ME :)