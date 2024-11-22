#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Please enter temperature in Celsius:");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f degree Celsius is equal to %.2f degree Fahrenheit", celsius, fahrenheit);
    return 0;
}
