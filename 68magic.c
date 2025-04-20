#include <stdio.h>

int main() {
    int n, r, sum;

    // Prompt user for input
    printf("Enter the number to check if it is a magic number: ");
    scanf("%d", &n);
    while(n > 9) {
        while(n > 0) {
            r = n % 10;
            sum += r;
            n /= 10;
        }
        n = sum;
        sum = 0;
    }
    if (n == 1) {
        printf("It is a magic number.\n");
    } else {
        printf("It is not a magic number.\n");
    }
    return 0;
}