/*
1.Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points 
to the third element where ptr is a pointer pointing to the first element of the 
array. 
*/

#include <stdio.h>

int main(){
    int num[10];
    int i=0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the number\n");
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("num[%d]=%d\n",i,num[i]);
    }
    int* ptr=&num[0];
    printf("The value is %d\n", *ptr);
    ptr+=2;
    printf("The value is %d\n", *ptr);
    return 0;
}