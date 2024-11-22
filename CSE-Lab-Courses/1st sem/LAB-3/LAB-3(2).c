#include<stdio.h>

int main()
{
    int number,a,b,c,d,e;
    printf("Enter a five digit number:");
    scanf("%d",&number);
    if (number < 10000 || number > 99999) {
        printf("The number must be a five-digit number.\n");}
     a=number%10;
     number=number/10;
     b=number%10;
     number=number/10;
     c=number%10;
     number=number/10;
     d=number%10;
     number=number/10;
     e=number%10;
     number=number/10;

     printf("Revers number are:%d%d%d%d%d",a,b,c,d,e);


    return 0;
}
