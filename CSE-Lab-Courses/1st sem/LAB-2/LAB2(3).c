#include<stdio.h>
int main ()
{
    float radius, diameter, circumference, area;
    printf("Please enter radius of the circle:");
    scanf("%f", &radius);
    diameter = 2 * radius;
    circumference = 2 * 3.1416 * radius;
    area = 3.1416 * radius * radius;
    printf("Diameter = %.2f\n", diameter);
    printf("Circumference = %.2f\n", circumference);
    printf("Area = %.2f", area);
    return 0;
}
