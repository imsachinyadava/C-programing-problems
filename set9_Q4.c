/*
Q4.Write a program with a structure representing a complex number
*/

struct complex
{
    float real;
    float imag;
};

#include <stdio.h>

int
main()
{
    struct complex c1;
    c1.real = 2.3;
    c1.imag = 6.3;
    printf("c1 = %.2f + %.2fi", c1.real, c1.imag);
    return 0;
}