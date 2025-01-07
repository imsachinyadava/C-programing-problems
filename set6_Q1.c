/*
1. Write a program to print the address of a variable. Use this address to get the 
value of the variable.
*/

#include <stdio.h>

int main(){
    int a=6;
    printf("The address of the variable a is %p\n", &a);
    printf("The value of variable at address %p is %d", &a, *(&a));
    return 0;
}