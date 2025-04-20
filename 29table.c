#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the num which table you need"" ");
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
int table=i*n;
printf("%d*%d=%d\n",n,i,table);
    }
}