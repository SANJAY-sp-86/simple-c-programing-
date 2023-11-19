#include <stdio.h>

int main() {
    int number, terms, i;

    printf("Input the number (Table to be calculated): ");
    scanf("%d", &number);

    printf("Input number of terms: ");
    scanf("%d", &terms);

    for (i = 0; i <= terms; i++) {
        printf("%d X %d = %d\n", number, i, number * i);
    }

    return 0;
}
