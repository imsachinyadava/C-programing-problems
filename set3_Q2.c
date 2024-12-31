/*
Q2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    printf("Enter marks of subject 1\n");
    scanf("%d", &sub1);
    printf("Enter marks of subject 2\n");
    scanf("%d", &sub2);
    printf("Enter marks of subject 3\n");
    scanf("%d", &sub3);
    int total = sub1 + sub2 + sub3;
    printf("Your marks are %d %d and %d and total marks is %d\n", sub1, sub2, sub3, total);
    if (sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("Sorry You are FAILED :(");
    }
    else if ((total/3) < 140) // 40% of 300 is 120
    {
        printf("Sorry You are FAILED :(");
    }
    else
    {
        printf("Congratulations You are PASSED :)");
    }
    return 0;
}

// FOLLOW ME