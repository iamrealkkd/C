#include<stdio.h>
int main(){
    int n;
    int i;
    int digsum=0;
    printf("Enter the number" " ");
    scanf("%d",&n);
    while(n>0){
    int las=n%10;
    digsum+=las;
    n=n/10;
    }
    printf("Sum of numbers %d",digsum);
}