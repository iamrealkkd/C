#include<stdio.h>
#include<conio.h>
int sum(int a,int b)
{
    int s=a+b;
    return s;
}
int main(){
    sum(10,20);
    printf("Sum is %d",sum(10,20));
}