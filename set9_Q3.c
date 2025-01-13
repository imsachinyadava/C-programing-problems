/*
Q3.Write a program to illustrate the use of arrow operator → in C.
*/

#include <stdio.h>
#include <string.h>

struct vector
{
    float x;
    float y;
};
int main()
{
    struct vector v;
    v.x = 5.2;
    v.y = 6.8;

    struct vector* ptr = &v;
    printf("%.2f\n",(*ptr).x);
    printf("%.2f",ptr->x);
    return 0;
}