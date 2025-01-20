/*
3. Solve problem 1 using calloc()
*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr=(int*)calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t",ptr[i]);
    }
    return 0;
}