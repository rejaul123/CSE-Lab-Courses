#include<stdio.h>
int main()
{
    float length_cm, length_m, length_km;
    printf("Please enter the value of length in centimeter:");
    scanf("%f", &length_cm);
    length_m = length_cm / 100;
    length_km = length_cm / 100000;
    printf("length_m = %.2f\n", length_m);
    printf("length_km = %.5f\n", length_km);
    return 0;
}
