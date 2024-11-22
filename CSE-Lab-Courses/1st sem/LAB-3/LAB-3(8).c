#include<stdio.h>

int main()
{
    int a,b,c,d,e,number;
    int new_number;
    printf("Enter five-digit number:");
    scanf("%d",&number);
    if(number <10000||number>99999 ){
        printf("Must enter five-digit number");}
    a= (number / 10000) % 10;
    b = (number / 1000) % 10;
    c = (number / 100) % 10;
    d = (number / 10) % 10;
    e = number % 10;

    a = (a + 1) % 10;
    b = (b + 1) % 10;
    c = (c + 1) % 10;
    d = (d + 1) % 10;
    e = (e + 1) % 10;
    new_number = a * 10000 + b * 1000 + c * 100 + d * 10 + e;

     printf("The new number is:%d",new_number);

    return 0;
}
