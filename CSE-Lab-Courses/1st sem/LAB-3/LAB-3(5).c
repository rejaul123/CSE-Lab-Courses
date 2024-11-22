#include<stdio.h>

int main()
{
    int digit,sum,a,b,c,d;
    printf("Enter four-digit number:");
    scanf("%d",&digit);
    if(digit <1000 || digit>9999){
        printf("Must enter four-digit");}
     a=digit %10;
     digit=digit/10;
     b=digit %10;
     digit=digit/10;
     c=digit %10;
     digit=digit/10;
     d=digit %10;
     digit=digit/10;
     sum=a+d;
     printf("Sum of the first and last digit of this number:%d",sum);

    return 0;
}
