#include<stdio.h>

main ()
{
    float kilometer,meter,feet,inches,centimeter;
    printf("Enter distance between two cities in kilometer:");
    scanf("%f",&kilometer);
    meter=kilometer*1000;
    feet=kilometer*3280.84;
    inches=kilometer*39370.08;
    centimeter=kilometer*100000;
    printf("Distance between two cities in meter:%f",meter);
    printf("\nDistance between two cities in feet:%f",feet);
    printf("\nDistance between two cities in inches:%f",inches);
    printf("\nDistance between two cities in centimeter:%f",centimeter);



    return 0;
}
