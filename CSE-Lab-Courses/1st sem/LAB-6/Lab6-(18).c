#include <stdio.h>
int main() {
    int sum = 0, term = 5, sign = 1;
    for (int i = 1; i <= 75; i++) {
        sum += term * sign;
        term += 6;
        sign *= -1;
    }
    printf("Sum of series = %d\n", sum);
    return 0;
}

