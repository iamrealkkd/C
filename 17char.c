#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    printf("Enter your char: ");
    scanf("%c", &a);
    
    if (isalpha(a)) {
        printf("'%c' is an alphabet.\n", a);
    } else if (isdigit(a)) {
        printf("'%c' is a digit.\n", a);
    } else {
        printf("'%c' is a special character.\n", a);
    }
    
    return 0;
}
