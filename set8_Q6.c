/*
Q6.Write a program to decrypt the string encrypted using encrypt function in 
problem 5.  
*/
#include <string.h>
void encrypt(char *string){
    for (int i = 0; i < strlen(string); i++)
    {
        string[i]=string[i]+1;
    }
}
void decrypt(char *string){
    for (int i = 0; i < strlen(string); i++)
    {
        string[i]=string[i]-1;
    }
}

#include <stdio.h>

int main(){
    char string[]="imsachinyadava";
    printf("%c\n",string);
    encrypt(string);
    printf("%s\n",string);
    decrypt(string);
    printf("%s\n",string);
    return 0;
}