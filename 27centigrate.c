#include<stdio.h>
int main(){
    int choice, f, c;
    printf("Enter your choice"" ");
    scanf("%d", &choice);
    switch(choice){
    case 1:printf("Enter ferhanite");
    scanf("%d", &f);
    printf("%d",5*(f-32)/9);
    break;
    case 2:printf("Enter celcius");
    scanf("%d", &c);
    printf("%d", (c*9/5)+32);
    break;
    default:printf("Wrong Choice");
    }
}