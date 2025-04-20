#include<stdio.h>
#include<conio.h>
        int main(){
            int arr1[5], arr2[5];
            printf("Enter array 1\n");
            for(int i=0;i<5;i++){
                scanf("%d",&arr1[i]);
            }
            printf("Enter array 2\n");
            for(int i=0;i<5;i++){
                scanf("%d",&arr2[i]);
        }
        for(int i=0;i<5;i++){
            printf("Sum of arrays at index %d is %d\n",i,arr1[i]*arr2[i]);
        }
        }