#include<stdio.h>
#include<conio.h>
int main(){
    int n, copy, s=0 , r;
    printf("Enter a number: ");
    scanf("%d",&n);
    copy = n;
    while(n>0){
        r = n%10;
        s = r+(s*10);
        n = n/10;
    }
    if(copy==s){
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
}