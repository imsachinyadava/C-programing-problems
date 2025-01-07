/*
2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
a function and print its address. Are these addresses same? Why?
*/
#include <stdio.h>
int fun(int* adr){
    printf("The address of i is %u",adr);
}
#include <stdio.h>

int main(){
    int i=5;
    int* adr=&i;
    printf("The address of i is %u\n", adr);
    fun(adr);
    return 0;
}