/*
Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string1[4];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the character\n");
        scanf(" %c", &string1[i]);
    }
    string1[3] = '\0';
    char string2[4];
    printf("Enter the string\n");
    scanf("%s", string2);
    if (strcmp(string1, string2) == 0)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}