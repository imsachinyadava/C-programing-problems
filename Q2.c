/*Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. */
#include <stdio.h>

int main()
{
    int radius , height;
    printf("Enter radius\n");
    scanf("%d", &radius);
    float area = 3.14*radius*radius;
    printf("The area of this circle with radius %d is %f", radius , area);
    printf("\nEnter height\n");
    scanf("%d", &height);
    float volume = area*height;
    printf("volume of cylinder with radius %d and height %d is %f", radius , height , volume);
    return 0;
}
