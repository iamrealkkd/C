#include<stdio.h>
#include<conio.h>
int sumofnatural(int n){
    int s;
    s=0;
for(int i=1;i<=n;i++){
    s+=i;
}
return s;
}
int main(){
    sumofnatural(10);
printf("sum of natural numbers is %d",sumofnatural(10));
    return 0;
}