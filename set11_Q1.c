/*
Q1. Write a program to dynamically create an array of size 6 capable of storing 6 
integers.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr=(int*)malloc(6*sizeof(int));
    ptr[0]=1;
    ptr[2]=12;
    ptr[3]=3;
    ptr[4]=13;
    ptr[1]=16;
    ptr[5]=18;
    printf("%d",ptr[2]);

    return 0;
}