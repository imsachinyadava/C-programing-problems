/*
Write your own version of strlen function from <string.h>
*/
#include <stdio.h>
int mystrlen(char[]);

int mystrlen(char string[]){
    int i=0;
    while(string[i]!='\0' ){
        i++;
    }
    printf("%d",i);
    return i;
}

#include <stdio.h>

int main(){
    char string[]="sachin";
    mystrlen(string);
    return 0;
}