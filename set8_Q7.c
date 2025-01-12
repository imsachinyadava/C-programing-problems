/*
Q7.Write a program to count the occurrence of a given character in a string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "possessiveness";
    int count = 0;
    for (int i = 0; i < 1 + strlen(string); i++)
    {
        if (string[i] == 's')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}