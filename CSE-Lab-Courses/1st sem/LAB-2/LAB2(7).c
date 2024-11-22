#include<stdio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Please enter temperature in Fahrenheit:");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f degree Fahrenheit is equal to %.2f degree Celsius", fahrenheit, celsius);
    return 0;
}
