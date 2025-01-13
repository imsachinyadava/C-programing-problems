/*
Q5.Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from 
the user.
*/
#include <stdio.h>
struct complex
{
    float real;
    float imag;
};

struct complex display(struct complex c){
    printf("Complex number is %0.2f + %0.2fi \n", c.real, c.imag);
}

int main(){
    for (int i = 0; i < 6; i++)
    {
        struct complex ci;
        printf("Enter the real part:\n");
        scanf("%f",&ci.real);
        printf("Enter the imaginary part:\n");
        scanf("%f",&ci.imag);
        display(ci);
    }
    return 0;
}
