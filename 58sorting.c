#include<stdio.h>
#include<conio.h>
int main(){
    int arr[5];
    int i,j,temp;
    printf("Enter the elements of the array\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }   
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("The sorted array is\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
}