/*
Write a function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice.
*/

#include <string.h>

void slice(char string[]){
    int m=2, n=5, j=0;
    char temp[5];
    for (int i = 2; i < 6; i++)
    {
        temp[j]=string[i];
        j++;
    }
    temp[4]='\0';
    strcpy (string, temp);
    
}
#include <stdio.h>

int main(){
    char string[]="imsachinyadava";
    slice(string);
    printf("%s",string);
    return 0;
}