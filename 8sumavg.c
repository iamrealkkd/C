#include<stdio.h>
#include<conio.h>
int main(){
    printf("Enter 10 nos.");
    int i,num,avg,sum=0;
    for(i=0;i<=10;i++){
        scanf("%d",&num);
        sum=sum+num;
    }
printf("sum=%d\n",sum);
printf("avg=%d\n",sum/10);}