/*
Q1.Create a two-dimensional vector using structures in C.
*/

#include <stdio.h>
#include <string.h>

int main(){
    struct vector
    {
        float x;
        float y;
    };

    struct vector v;
    v.x=2.5;
    v.y=3.2;
printf("vector => (%0.2f , %0.2f)", v.x, v.y);
    return 0;
}