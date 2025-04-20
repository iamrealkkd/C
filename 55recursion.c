#include<stdio.h>
#include<conio.h>
int fact(int n){
   if (n==0)
   {
       return 1;
}
else
{
    return n*fact(n-1);
}
} 
int main(){
    fact(5);
    printf("The factorial of 5 is %d",fact(5));
    return 0;
}