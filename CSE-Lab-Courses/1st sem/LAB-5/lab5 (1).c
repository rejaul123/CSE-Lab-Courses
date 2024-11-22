/*If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.*/

#include<stdio.h>

int main()
{
    int ram, shyam, ajay;


    printf("Please enter the ages of Ram, Shyam, and Ajay: ");
    scanf("%d %d %d", &ram, &shyam, &ajay);

    if (ram < shyam && ram < ajay)
        printf("Ram is the youngest.\n");
    else if (shyam < ram && shyam < ajay)
        printf("Shyam is the youngest.\n");
    else if (ajay < ram && ajay < shyam)
        printf("Ajay is the youngest.\n");
    else
        printf("same age.\n");

    return 0;
}
