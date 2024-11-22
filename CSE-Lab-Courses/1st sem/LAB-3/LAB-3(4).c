#include<stdio.h>

 int main()
 {
     int c,d,e;
     printf("Enter the value of c:",c);
          scanf("%d",&c);
     printf("Enter the value of d:",d);
          scanf("%d",&d);
     e=c;
     c=d;
     d=e;
     printf("The value of c:%d",c);
     printf("\nThe value of d:%d",d);


    return 0;

 }
