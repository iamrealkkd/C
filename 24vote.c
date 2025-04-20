#include<stdio.h>
#include<conio.h>
void main(){
    int n;
    printf("Enter the age of the person"" ");
    scanf("%D",&n);
    if(n>18){
        printf("The person is can vote");
    }
    else{
        printf("The person cannot vote");
    }
}