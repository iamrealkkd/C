#include<stdio.h>
#include<conio.h>
int main(){
    int ang1, ang2, ang3;
    printf("Enter the first, second and third angles of a triangle: ");
    scanf("%d, %d, %d", &ang1, &ang2, &ang3);
    if(ang1+ang2+ang3==180 && ang1>0 && ang2>0 && ang3>0){
        printf("The angles are valid for a triangle.");
    }
    else{
        printf("The angles are not valid for a triangle.");
}
}