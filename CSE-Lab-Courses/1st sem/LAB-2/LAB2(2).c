#include<stdio.h>
int main(){
    float side1,side2,area,perimeter;
    printf("please enter the lenght and breadth of the rectangle:");
    scanf("%f,%f",&side1,&side2);
    area=side1*side2;
    printf("area =%.2f\n",area);
    perimeter= 2*(side1+side2);
    printf("perimeter=%.2f",perimeter);
    return 0;





}
