#include<stdio.h>
#include<conio.h>
int main(){
    int num[10];
    int sum=0;
    float avg;
    printf("Enter 10 nums"" ");
    for(int i=0;i<10;i++){
    scanf("%d", &num[i]);
    sum=sum+num[i];
    }
    avg=sum/10.0;
    printf("Sum of 10 nums is %d\n", sum);
    printf("Avg of 10 nums is %f", avg);
}