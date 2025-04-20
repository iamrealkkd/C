#include<stdio.h>
#include<conio.h>
void main()
{
    int array[5]={45,14,78,95,45};
    int i=0,item;
    printf("Enter the search item");
    scanf("%d",&item);
    while(i<5){
        if(array[i]==item){
            printf("Item found at %d",i+1);
            break;
        }
        i++;
    }
    if(i>=5)
        printf("Item not found");
        getch();
}