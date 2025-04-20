#include<stdio.h>
#include<conio.h>
int main(){
    int n,c, s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    c=n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    if(c==s){
        printf("The number is a perfect number");
    }
    else{
        printf("The number is not a perfect number");
    }
}