/*
5. Write a program using a function which calculates the sum and average of two 
numbers. Use pointers and print the values of sum and average in main(). 
*/
#include <stdio.h>
int* sum(int , int);

int* sum(int a , int b){
    int c=a+b;
    int* adr=&c;
    printf("The sum is %d\n",c);
    return adr;
}    

float* avg(int , int);

float* avg(int a , int b){
    float c=(a+b)/2;
    float* adr=&c;
    printf("The average is %.2f\n",c);
    return adr;
}

#include <stdio.h>

int main(){
    int a=5;
    int b=7;
    int* adr1=sum(a,b);
    float* adr2=avg(a,b);
    printf("The address of function are %u and %u", adr1, adr2);
    return 0;
}