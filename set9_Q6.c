/*
Q6.Write problem 4’s structure using ‘typedef’ keywords
*/

typedef struct complex
{
    float real;
    float imag;
} complexno;

#include <stdio.h>

int main(){
    complexno c1;
    c1.real=2.3;
    c1.imag=9.6;
    printf("c1 = %.2f + %.2fi", c1.real, c1.imag);
    return 0;
}