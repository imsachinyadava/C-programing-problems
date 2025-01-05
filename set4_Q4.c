/*
4. Write a program using recursion to calculate nth element of Fibonacci series.
F(n)=F(n−1)+F(n−2)
with the initial values:
Fibonacci series:       F(n)=F(n−1)+F(n−2)
                         where
                        F(0)=0,F(1)=1
*/

#include <stdio.h>

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of element of fibonacci series you want to find:\n");
    scanf("%d", &n);
    fibonacci(n);
    printf("%d", fibonacci(n));
    return 0;
}