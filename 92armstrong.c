#include<stdio.h>
#include<conio.h>
int main(){
    int n,s=0, r,c;
    printf("Enter a number: ");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        s+=r*r*r;
        n=n/10;
    }
    if(c==s){
        printf("The number is an armstrong number");
    }
    else{
        printf("The number is not an armstrong number");
    }
}