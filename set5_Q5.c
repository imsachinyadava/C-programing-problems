/*
6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/
int sum(int);

int sum(int n){
    if (n==1){
        return 1;
    }
    return (n+sum(n-1));
}
#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    sum(n);
    printf("%d", sum(n));
    return 0;
}
