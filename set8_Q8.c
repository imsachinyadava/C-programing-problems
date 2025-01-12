/*
Q8.Write a program to check whether a given character is present in a string or not.
*/
#include <string.h>
#include <stdio.h>

int main()
{
    char string[100];
    printf("Enter the string:\n");
    fgets(string, sizeof(string), stdin);
    char test;
    int m = 0;
    printf("Enter the character you want to check:\n");
    scanf("%c", &test);
    for (int i = 0; i < 1 + strlen(string); i++)
    {
        if (string[i] == test)
        {
            m = 1;
            break;
        }
    }
    if (m)
    {
        printf("Entered character is present in the string");
    }
    else
    {
        printf("Entered character is not present in the string");
    }

    return 0;
}