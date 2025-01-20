/*
4.Create an array dynamically capable of storing 5 integers. Now use realloc so
that it can now store 10 integers.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)calloc(5, sizeof(int));
    printf("%d\n", ptr[4]);
    realloc(ptr, 10 * sizeof(int));
    printf("%d", ptr[9]);
    return 0;
}