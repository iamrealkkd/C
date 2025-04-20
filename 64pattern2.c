#include <stdio.h>

int main() {
    int rows = 4; // Number of rows
    int num = 1;  // Starting number

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
