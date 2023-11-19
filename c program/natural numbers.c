#include <stdio.h>



int main() {
    int n, i, sum = 0;

    printf("Input the number: ");
    scanf("%d", &n);

    printf("\nInput number:\n%d\n", n);
    printf("The first %d natural numbers are:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
        sum += i;
    }

    printf("The Sum of Natural Numbers up to %d terms: %d\n", n, sum);

    return 0;
}
