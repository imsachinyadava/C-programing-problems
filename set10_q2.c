/*
Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.
*/

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("file1.txt", "w");
    int num;
    for (int i = 0; i < 10; i++)
    {
        num = 5 * (i + 1);
        fprintf(ptr, "5 X %d = %d\n", i+1, num);
    }
    return 0;
}