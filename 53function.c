#include<stdio.h>
#include<conio.h>
int sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
return s;
}
int main(){
sum(10);
    printf("The sum of first %d",sum(10));
    return 0;
}