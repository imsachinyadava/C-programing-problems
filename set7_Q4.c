/*
Write a program containing a function which reverses the array passed to it.
*/

#include <stdio.h>
void printarray(int*, int);

void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
}
void reverse(int arr[], int n){
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
}

#include <stdio.h>

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printarray(arr, 6);
    reverse(arr, 6);
    printarray(arr, 6);
    return 0;
}