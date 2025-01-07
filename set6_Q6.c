/*
6. Write a program to print the value of a variable i by using “pointer to pointer” type 
of variable. 
*/

#include <stdio.h>

int main(){
    int i=5;
    printf("The value of the variable is %d",*(&(*(&i))));
    return 0;
}