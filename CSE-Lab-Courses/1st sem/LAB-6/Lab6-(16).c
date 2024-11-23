#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("Sum of series = %d\n", sum);
    return 0;
}

