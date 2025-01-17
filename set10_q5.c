/*
Write a program to read a text file character by character and write its content 
twice in separate file.
*/

#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("file1.txt","r");
    char c;
    FILE *out_ptr;
    out_ptr = fopen("file2.txt", "w");
    while ((c = fgetc(ptr)) != EOF)
    {
        fputc(c, out_ptr);
        fputc(c, out_ptr);
        printf("%c", c);
    }
    fclose(out_ptr);
}