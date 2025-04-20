#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter a number till you want the sum: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}