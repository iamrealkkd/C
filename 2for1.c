#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    float average;

    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / 10.0;

    printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    return 0;
}
