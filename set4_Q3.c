/*
3.  Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
    earth. Consider g = 9.8m/s2. 
*/

float force(float);

float force(float m){
    printf("Force of attraction on a body of mass %0.2fKg is %0.2fN", m , m*9.8);
}

#include <stdio.h>

int main(){
    force(38.2);
    return 0;
}