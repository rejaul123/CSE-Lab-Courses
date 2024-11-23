#include <stdio.h>
int main() {
    int num, original, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        digit = num % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == original) {
        printf("%d is a Strong number\n", original);
    } else {
        printf("%d is not a Strong number\n", original);
    }
    return 0;
}

