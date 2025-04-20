#include<stdio.h>
#include<conio.h>
int main(){
    int n=4;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c",ch);
            }
            ch++;
        printf("\n");
     }
    return 0;
    }

