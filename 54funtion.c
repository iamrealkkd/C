#include<stdio.h>
#include<conio.h>
int multi(int n){
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    return s;
}
int main(){
    multi(5);
    printf("The factorial of 5 is %d", multi(5));
    return 0;
}