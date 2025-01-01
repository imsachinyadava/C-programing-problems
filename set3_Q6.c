/*
Q6. Write a program to find greatest of four numbers entered by the user.
*/
#include <stdio.h>

int main(){
    int a, b, c, d ;
    printf("Enter 1st number\n");
    scanf("%d", &a);
    printf("Enter 2nd number\n");
    scanf("%d", &b);
    printf("Enter 3rd number\n");
    scanf("%d", &c);
    printf("Enter 4th number\n");
    scanf("%d", &d);
   if (a>=b && a>=c && a>=d )
   {
    printf("The greatest is %d", a);
   }
   if (b>=a && b>=c && b>=d )
   {
    printf("The greatest is %d", b);
   }
   if (c>=a && c>=b && c>=d )
   {
    printf("The greatest is %d", c);
   }
   if (d>=b && d>=c && d>=a )
   {
    printf("The greatest is %d", d);
   }
    return 0;
}

// FOLLOW ME :)
