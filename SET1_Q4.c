//Write a program to calculate simple interest for a set of values representing      
//principal, number of years and rate of interest.
#include <stdio.h>

int main()
{
    int principal, years;
    float rate;
    printf("Enter principal\n");
    scanf("%d", &principal);
    printf("Enter rate\n");
    scanf("%f", &rate);
    printf("Enter years\n");
    scanf("%d", &years);
    printf("The simple interest is %f", (principal*rate*years)/100);
    return 0;
}

// FOLLOW ME :)
