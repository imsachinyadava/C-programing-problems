/*
4. Write a function and pass the value by reference. 
*/

void fun(int*);

void fun(int* a){
    *a=76;
}

#include <stdio.h>

int main(){
    int a = 5;
    printf("The value of i is %d",a);
    fun(&a);
    printf("The value of i is %d",a);
    return 0;
}