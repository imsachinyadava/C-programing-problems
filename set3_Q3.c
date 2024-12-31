/*

Q3. Calculate income tax paid by an employee to the government as per the slabs
    mentioned below:
    Income Slab           Tax
    2.5 – 5.0L            5%
    5.0L - 10.0L          20%
    Above 10.0L           30%

*/
#include <stdio.h>

int main()
{
    float income, tax;
    printf("Enter Your Income:\n");
    scanf("%f", &income);
    if (income < 250000)
    {
        printf("Payable tax is 0");
    }
    else if (income >= 250000 && income < 500000)
    {
        tax=(income-250000) * 5 / 100;
    }
    else if (income >= 500000 && income < 1000000)
    {
        tax=((income-500000) * 20 / 100)+((500000-250000)*5/100);
    }
    else if (income >= 1000000)
    {
        tax=((income-1000000) * 30 / 100)+((1000000-500000) * 20 / 100)+((500000-250000)*5/100);
    }
    printf("Payable tax is %f", tax);

    return 0;
}

// FOLLOW ME :)