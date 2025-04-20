#include<stdio.h>
#include<conio.h>
int minoftwo(int a, int b){
if(a<b){
    return a;
}
else{
    return b;
}
}
int main(){
    minoftwo(10,20);
    printf ("%d",minoftwo(10,20));
    return 0;
}