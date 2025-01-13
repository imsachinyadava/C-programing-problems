/*Write a structure capable of storing date. Write a function to compare those
dates.*/

struct date
{
    int day;   // DD
    int month; // MM
    int year;  // YY
};
int comparedates(struct date d1, struct date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    else if (d1.year < d2.year)
    {
        return -1;
    }
    else if (d1.year == d2.year)
    {
        if (d1.month > d2.month)
        {
            return 1;
        }
        else if (d1.month < d2.month)
        {
            return -1;
        }
        else if (d1.month == d2.month)
        {
            if (d1.day > d2.day)
            {
                return 1;
            }
            else if (d1.day < d2.day)
            {
                return -1;
            }
            else if (d1.day == d2.day)
            {
                return 0;
            }
        }
    }
}

#include <stdio.h>

int main()
{
    struct date d1 = {12, 10, 2008};
    struct date d2 = {12, 10, 2006};
    int result = comparedates(d1, d2);
    if (result == -1)
    {
        printf("d1 is earlier");
    }
    else if (result == 1)
    {
        printf("d2 is earlier");
    }
    else if (result == 0)
    {
        printf("Dates are equal");
    }
    return 0;
}