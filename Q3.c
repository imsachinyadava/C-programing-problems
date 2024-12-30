/*Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit).*/
#include <stdio.h>

int main(){
    float celcius;
    printf("Enter temperature in celcius\n");
    scanf("%f", &celcius);
    printf("The temperature in Fahrenheit is %f", (celcius*9/5)+32);
    return 0;
}