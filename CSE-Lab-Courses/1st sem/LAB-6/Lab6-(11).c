#include <stdio.h>
#include <math.h>
int main() {
    int num, first, last, digits, swappedNum;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num % 10;
    digits = (int)log10(num);
    first = num / (int)pow(10, digits);
    swappedNum = last * (int)pow(10, digits) + (num % (int)pow(10, digits)) - last + first;
    printf("Number after swapping first and last digits = %d\n", swappedNum);
    return 0;
}

