/*
Q5.Write a program to encrypt a string by adding 1 to the ascii value of its 
characters.
*/
#include <string.h>
#include <stdio.h>

int main(){
    char string[]="imsachinyadava";
    for (int i = 0; i < strlen(string); i++)
    {
        string[i]=string[i]+1;
    }
    printf("%s",string);
    
    return 0;
}