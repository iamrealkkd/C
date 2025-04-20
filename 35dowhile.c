#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum=0;
    do{
        printf("Enter a number: ");
        scanf("%d",&n);
        sum=sum+n;
    }
    while(n!=0);{
        printf("Sum of numbers is: %d",sum);
    }
}