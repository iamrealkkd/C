#include<stdio.h>
#include<conio.h>
        int main(){
            int data[6];
            printf("Enter 7 Data\n");
            for(int i=0;i<7;i++){
                scanf("%d",&data[i]);
            }
            printf("Data Entered is\n");
            for(int i=0;i<7;i++){
            printf("%d\n",data[i]);
            }
        }