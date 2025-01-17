/*
Take name and salary of two employees as input from the user and write them to 
a text file in the following format:
    i. Name1, 3300
    ii. Name2, 7700
*/
#include <stdio.h>

int main(){
    char a[20],b[20];
    float c, d;
    printf("Write name of 1st employee :\n");
    scanf("%s", &a);
    printf("Write salary of 1st employee :\n");
    scanf("%f", &c);
    printf("Write name of 2nd employee :\n");
    scanf("%s", &b);
    printf("Write salary of 2nd employee :\n");
    scanf("%f", &d);
    FILE *ptr;
    ptr = fopen("file1.txt","w");
    fprintf(ptr, "i. %s, %0.2f\n", a, c);
    fprintf(ptr, "ii. %s, %0.2f", b, d);
    return 0;
}