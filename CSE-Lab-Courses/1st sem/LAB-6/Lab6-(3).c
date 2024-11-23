#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum of even numbers: %d", sum);
    return 0;
}
