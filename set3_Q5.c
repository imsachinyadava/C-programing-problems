/*
Q5. Write a program to determine whether a character entered by the user is 
    lowercase or not. 
*/

#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character :\n");
    scanf("%c", &ch);
    if (ch>='a' && ch<='z')  //ASCII VALUE COMPARISON
    {
        printf("The character is a lowercase");
    }
    else
    {
            printf("The character is not lowercase");
    }
    
    return 0;
}

// FOLLOW ME :)