/*
Q2. Use the array in problem 1 to store 6 integers entered by the user
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr=(int*)malloc(6*sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the number:\n");
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t",ptr[i]);
    }

    return 0;
}