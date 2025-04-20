#include<stdio.h>
#include<conio.h>
int main(){
int n;
int cube=0;
printf("Enter a number:");
scanf("%d",&n);
int copy=n;
while(n>0){
int last=n%10;
cube+=last*last*last;
n=n/10;
}
if(cube==copy){
printf("Armstrong number");
}
else{
    printf("Not an Armstrong number");
}
return 0;
}