#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern
    char ch = 'A'; // Starting character

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
        }
        ch++; // Move to the next character
        printf("\n");
    }

    return 0;
}
