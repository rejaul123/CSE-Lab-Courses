#include <stdio.h>
int main() {
    int sum = 0, term = 7;
    for (int i = 1; i <= 100; i++) {
        sum += term;
        term += 13;
    }
    printf("Sum of series = %d\n", sum);
    return 0;
}

