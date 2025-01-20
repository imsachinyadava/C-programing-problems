/*
4.Create an array dynamically capable of storing 5 integers. Now use realloc so
that it can now store 10 integers.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i]=7*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    realloc(ptr, 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
    {
        ptr[i]=7*(i+1);
    }
    for (int i = 0; i < 15; i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;
}