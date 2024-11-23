#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    return 0;
}
