#include<stdio.h>
#include<conio.h>
int main(){
    int n,i;
    int f=0;
    printf("Enter your num" " ");
    scanf("%d",&n);
    for(i=2;i<n-1;i++){
        if(n%i==0){
            f=1;
            break;
            
        }
        
    }
    if(f==1){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}