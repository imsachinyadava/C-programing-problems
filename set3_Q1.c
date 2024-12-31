/*
 Q1. What will be the output of this program
    int a = 10;
    if (a = 11){
        printf("I am 11");
    }
    else{
        printf("I am not 11");
*/

#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
    {
        printf("I am 11");
    }
    else
    {
        printf("I am not 11");
    }
    return 0;
}

// OUTPUT : I am 11
// IT SHOULD BE == IF WE WANT EQUATE A WITH 11
// ONLY = WILL ALWAYS BE A TRUE STATEMENT IF IT IS HAVING A NON ZERO NUMBER
// HENCE IF STATEMENT IS ALWAYS EXECUTED

// FOLLOW ME :)
