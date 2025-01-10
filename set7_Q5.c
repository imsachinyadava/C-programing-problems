/*
Q5. Write a program containing functions which counts the number of positive 
integers in an array. 
*/
#include <stdio.h>
void printarray(int *, int);

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int positiveint(int*, int );

int positiveint(int arr[], int n){
    int m=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            m++;
        }  
    }
    printf("The number of positive integers in the array is %d",m);
}



#include <stdio.h>

int main(){
    int arr[]={2, -6, -8, 9, 8, 52 ,-36, 45, -95, 12, -65, 62, -7, 5};
    printarray(arr, 14);
    positiveint(arr, 14);
    return 0;
}