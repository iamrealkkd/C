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
for ( i = 0; i < 4; i++)
{
    for ( j = 0; j < 4-i; j++)
    {
        if (arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }

    }

}
printf("The sorted array is\n");
for ( i = 0; i < 5; i++)
{
    printf("%d\n",arr[i]);
}
}