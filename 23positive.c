#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n); // Corrected to include '&'
    if(n > 0){
        printf("The number is positive");
    }
    else{
        printf("The number is negative"); // Updated message
    }
}
