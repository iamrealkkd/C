#include<stdio.h>
#include<conio.h>
int sumofmulti(int n){
    int s=1;
    for(int i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
    
}
int main(){
    sumofmulti(5);
    printf("sum of multi numbers is %d",sumofmulti(5));
    return 0;
}
