/*
7. Write a program using function to print the following pattern (first n lines)
    *
    * * *
    * * * * *
*/

#include <stdio.h>

void display(int);

void display(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int m = 1; m <= 2 * i - 1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    display(n);
    return 0;
}