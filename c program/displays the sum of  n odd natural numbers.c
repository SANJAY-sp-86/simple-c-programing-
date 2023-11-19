#include <stdio.h>

int main() {
    int n, i, count = 1, sum = 0;

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The odd numbers are:\n");

    for (i = 0; i < n; i++) {
        printf("%d\n", count);
        sum += count;
        count += 2;
    }

    printf("The Sum of odd Natural Number up to %d terms is: %d\n", n, sum);

    return 0;
}
