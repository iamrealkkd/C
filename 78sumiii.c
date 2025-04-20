#include<stdio.h>
#include<conio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}
int main(){
    sum(5);
    printf("sum is %d",sum(5));
    return 0;
}