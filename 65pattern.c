#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in Floyd's Triangle

    for (int i = 1; i <= rows; i++) {
        int num = (i % 2 == 0) ? 0 : 1; // Start with 0 if row is even, otherwise 1

        for (int j = 1; j <= i; j++) {
            printf("%d", num);
            num = 1 - num; // Toggle between 0 and 1
        }
        printf("\n");
    }

    return 0;
}
