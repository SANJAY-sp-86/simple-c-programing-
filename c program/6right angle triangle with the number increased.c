#include <stdio.h>

int main() {
    int rows, i, j, count = 1;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        if (i % 2 == 0) {
            for (j = i; j >= 1; j--) {
                if (j == 1) {
                    printf("%d", count);
                } else {
                    printf("%d overline ", count);
                }
                count++;
            }
        } else {
            for (j = 1; j <= i; j++) {
                if (j == i) {
                    printf("%d", count);
                } else {
                    printf("%d * ", count);
                }
                count++;
            }
        }
        printf("\n");
    }

    return 0;
}
