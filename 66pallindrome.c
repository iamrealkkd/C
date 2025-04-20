#include<stdio.h>
#include<conio.h>
int main(){

int n,r,c,s=0;
printf("Enter the number to check for pallindrome\n");
scanf("%d",&n);
c = n; // Corrected assignment

while(n>0){
r=n%10;
s=r+(s*10);
n=n/10;
}
if(c==s)
printf("The number is pallindrome\n");
else
printf("The number is not pallindrome\n");
return 0;
}
