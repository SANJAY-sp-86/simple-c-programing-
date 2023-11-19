#include <stdio.h>

int main() {
    int numbers[5], i, sum = 0;
    float average;

    printf("Input the 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("The sum of 5 numbers is: %d\n", sum);

    average = (float)sum / 5; // Calculating average as sum divided by total numbers
    printf("The Average is: %.1f\n", average);

    return 0;
}
