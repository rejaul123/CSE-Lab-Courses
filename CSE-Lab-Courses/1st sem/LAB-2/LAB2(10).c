#include<stdio.h>
int main()
{
    float a, b, c, d, e, f, g, h;
    printf("Please enter the marks of SPL, ENGLISH, MATH, PHYSICS and CHEMISTRY:");
    scanf("%f, %f, %f, %f, %f", &a, &b, &c, &d, &e, &f, &g, &h);
    f = a + b + c + d + e;
    g = f/5;
    h = (f/500) * 100;
    printf("Total = %.2f\n", f);
    printf("Average = %.2f\n", g);
    printf("Percentage = %.2f", h);
    return 0;
}
