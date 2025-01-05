/*
Q2. Write a function to convert Celsius temperature into Fahrenheit. 
*/

float fahrenheit(float);

float fahrenheit(float a){
    printf("Fahrenheit value of %0.2f celcius is %0.2f", a, (9*a)/5+32);
}

 #include <stdio.h>
 
 int main(){
    fahrenheit(37);
    return 0;
 }
