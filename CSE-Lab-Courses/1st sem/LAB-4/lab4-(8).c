#include<stdio.h>
main()
{
    float a,b,c,d,e,avg;
    printf("Enter the marks of 5 subjects from 0-100:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    if(0<=a && 100>=a && 0<=b && 100>=b && 0<=c && 100>=c && 0<=d && 100>=d && 0<=e && 100>=e)
    {
        if(90<=avg && 100>=avg)
        {
            printf("A");
        }
        else if(80<=avg && 90>avg)
        {
            printf("B");
        }
        else if(70<=avg && 80>avg)
        {
            printf("C");
        }
        else if(60<=avg && 70>avg)
        {
            printf("D");
        }
        else if(40<=avg && 60>avg)
        {
            printf("E");
        }
        else if(40>avg)
        {
            printf("F");
        }
    }
    else
    {
        printf("invalid");
    }

}
