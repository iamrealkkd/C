#include<stdio.h>
#include<conio.h>
int main(){
 int n,i; 
 int factorial=1  ;
 printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial=factorial*i;
    }
    printf("Factorial of %d is: %d",n,factorial);
    return 0;
}