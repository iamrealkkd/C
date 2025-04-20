#include<stdio.h>
#include<conio.h>
int sum(int n){
   if (n==1)
   {
       return 1;
}
else
{
    return n+sum(n-1);
}
} int main(){
    sum(10);
    printf("The sum of 10 is %d",sum(10));
    return 0;
}