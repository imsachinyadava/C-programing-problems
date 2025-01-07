/*
3. Write a program to change the value of a variable to ten times of its current 
value. 
*/

void tentimes(int*);

void tentimes(int* a){
    *a=*a*10;
}


#include <stdio.h>

int main(){
    int i=5;
    printf("The value of i is %d\n",i);
    tentimes(&i);
    printf("The value of i is %d",i);
    return 0;
}