// Q3 Write a program to check whether a number is divisible by 97 or not. 
#include <stdio.h>

int main(){
    int number;
    printf("Enter the number to be tested is divisible by 97 or not\n");
    scanf("%d",&number);
    int remainder = number%97 ;
    if (remainder == 0) {
        printf("the entered number is divisible by 97");
    }
    else {
        printf("the entered number is not divisible by 97");
    }

    return 0;
}

// FOLLOW ME :)
