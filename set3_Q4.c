/*
Q4.Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.
*/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("Entered year is a leap year");
    }
    else
    {
        printf("Entered year is not a leap year");
    }
    return 0;
}

// FOLLOW ME :)
