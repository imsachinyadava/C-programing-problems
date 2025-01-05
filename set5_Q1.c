/*
Q1. Write a program using function to find average of three numbers.
*/

#include <stdio.h>

int average(int ,  int , int);

int average(int a , int b , int c){
    printf("The average of the numbers is %d", (a+b+c)/3);
}

int main(){
    average(3,4,5);
    return 0;
}
