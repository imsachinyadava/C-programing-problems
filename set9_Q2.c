/*
Q2.Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional.
*/

struct vector
{
    int x;
    int y;
};

struct vector sumVector(struct vector, struct vector);
struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector v;
    v.x=v1.x+v2.x;
    v.y=v1.y+v2.y;
    return v;
}

#include <stdio.h>

int main(){
    struct vector v1;
    v1.x=6;
    v1.y=5;
    struct vector v2;
    v2.x=8;
    v2.y=7;
    struct vector result = sumVector(v1, v2);
    printf("Result vector: x = %d, y = %d\n", result.x, result.y);
    return 0;
}