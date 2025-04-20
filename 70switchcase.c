#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the operation to perform\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&c);
    switch(c){
        case 1:printf("Addition is %d",a+b);
        break;
        case 2:printf("Subtraction is %d",a-b);
        break;
        case 3:printf("Multiplication is %d",a*b);
        break;
        case 4:printf("Division is %d",a/b);
        break;
        default:printf("Invalid input");

    }
    return 0;

}