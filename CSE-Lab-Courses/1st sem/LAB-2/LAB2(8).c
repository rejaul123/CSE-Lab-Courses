#include<stdio.h>
int main()
{
    float angle1, angle2, angle3;
    printf("Please enter the two angles of the triangle:");
    scanf("%f, %f", &angle1, &angle2);
    angle3 = 180 - (angle1 + angle2);
    printf("The third angle of the triangle is %.2f", angle3);
    return 0;
}
