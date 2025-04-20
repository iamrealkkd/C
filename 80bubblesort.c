#include<stdio.h>
#include<conio.h>
void main(){
    int array[5];
    int i,j,temp;
    printf("Enter the elements of the array\n");
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("The sorted array is\n");
    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }
}