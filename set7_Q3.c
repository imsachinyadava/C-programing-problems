/*
2. Repeat problem 2 for a general input provided by the user using scanf. 
*/

#include <stdio.h>

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number\n");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
         printf("arr[%d]=%d\n", i, arr[i]);
    }
    return 0;
}