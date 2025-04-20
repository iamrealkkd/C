#include<stdio.h>
#include<conio.h>
int main(){
    int n,r,c,s=0;
    printf("Enter the number to check if it is an armstrong number\n");
    scanf("%d",&n);
    c=n;
    while(n>0){
        r=n%10;
        s+=r*r*r;
        n=n/10;
    }
    if(c==s)
        printf("The number is an armstrong number\n");
    else
        printf("The number is not an armstrong number\n");
}