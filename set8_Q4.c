/*
Write your own version of strcpy function from <string.h> 
*/
#include <string.h>
#include <stdio.h>
void mystrcpy(char string1[], char string2[]){
    for (int i = 0; i < 1+strlen(string2); i++)
    {
        string1[i]=string2[i];
    }
    printf("%s",string1);
}

#include <stdio.h>

int main(){
    char string1[]="abcd";
    char string2[]="zyxwvut";
    mystrcpy(string1, string2);
    return 0;
}