#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        double fact = 1.0;
        for (int j = 1; j <= i; j++) {
            fact *= j;
        }
        sum += i / fact;
    }
    printf("Sum of series = %.5lf\n", sum);
    return 0;
}

