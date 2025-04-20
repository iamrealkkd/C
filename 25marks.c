#include<stdio.h>
#include<conio.h>
void main(){
    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);
    if(marks>90){
        printf("Grade: A+");
    }
    else if(marks>60){
        printf("Grade: A");
    }
    else if(marks>40){
        printf("Grade: B");
    }
    else{
        printf("Grade: C");
    }
}