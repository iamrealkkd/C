#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter how much you want"" ");
    scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%3==0){
        printf("%d is multiple of 3\n",i);
    }
}
}