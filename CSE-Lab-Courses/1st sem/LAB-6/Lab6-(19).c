#include <stdio.h>
int main() {
    int n, sum = 0, tempSum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        tempSum += i;
        sum += tempSum;
    }
    printf("Sum of series = %d\n", sum);
    return 0;
}

