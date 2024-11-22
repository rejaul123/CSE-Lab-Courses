#include <stdio.h>
int main(){
float sub1,sub2,sub3,sub4,sub5,percentage;
printf ("please enter 5 different subject number:");
scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);

percentage = ((sub1+sub2+sub3+sub4+sub5)/500)*100;

if (percentage >= 60) {
        printf("First division\n");
}
else if (percentage >= 50 && percentage < 60) {
        printf("Second division\n");
}
else if (percentage >= 40 && percentage < 50) {
        printf("Third division\n");
}
else {
        printf("Fail\n");
}


return 0;
}
