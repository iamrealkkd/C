#include<stdio.h>
#include<conio.h>
int main(){
    int term, square;
    int sum=0;
    printf("Enter the number of terms: ");
    scanf("%d", &term);
    for(int i=1; i<=term; i++){
        square=i*i;
        printf("%d^2 = %d\n", i, square);
        sum+=square;
    }
    printf("Sum of squares of first %d natural numbers is %d", term, sum);
    return 0;
}