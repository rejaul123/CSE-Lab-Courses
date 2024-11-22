/*Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example,
the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter. */
#include <stdio.h>
int main(){
float length ,breadth,area,perimeter;
printf("please enter the value of length and breadth: ");

scanf("%d %d",&length, &breadth);
area = length*breadth;
perimeter = 2 * (length + breadth);
if (area > perimeter) {
        printf("The area of the rectangle is greater than its perimeter.\n");
    } else {
        printf("The perimeter of the rectangle is greater than or equal to its area.\n");
    }

    return 0;
}


