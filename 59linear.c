#include<stdio.h>
#include<conio.h>
int main(){
    int arr[5]={5,4,3,2,1},item,i;
    printf("Enter the element to be searched\n");
    scanf("%d",&item);
    for ( i = 0; i < 5; i++)
    {
        if (arr[i]==item)
        {
            printf("Element found at position %d\n",i+1);
            break;
        }
    }
    if (i>=5)
    {
        printf("Element not found\n");
    }
}