#include<stdio.h>
#include<conio.h>
int main(){
    int n, i, count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("The number is a prime number");
    }
    else{
        printf("The number is not a prime number");
    }

}