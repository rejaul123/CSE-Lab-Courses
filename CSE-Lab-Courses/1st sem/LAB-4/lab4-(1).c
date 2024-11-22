#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Please enter 3 numbers: ");
    scanf("%d, %d, %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is the biggest number than %d and %d.\n", num1, num2, num3);
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("%d is the biggest number than %d and %d.\n", num2, num1, num3);
    }
    else
    {
        printf("%d is the biggest nunber than %d and %d.\n", num3, num1, num2);
    }
    if (num1 < num2 && num1 < num3)
    {
        printf("%d is the smallest number than %d and %d.", num1, num2, num3);
    }
    else if(num2 < num1 && num2 < num3)
    {
        printf("%d is the smallest number than %d and %d.", num2, num1, num3);
    }
    else
    {
        printf("%d is the smallest nunber than %d and %d.", num3, num1, num2);
    }
    return 0;
}
