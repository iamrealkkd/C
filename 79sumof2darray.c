#include<stdio.h>
#include<conio.h>
int main(){
int array1[3][2]={{1,2},{3,4},{5,6}};
int array2[3][2]={{5,5},{6,6},{7,7}};
int sum[3][2];
for(int i=0;i<3;i++){
for(int j=0;j<2;j++){
    sum[i][j]=array1[i][j]+array2[i][j];

}
}
for(int i=0;i<3;i++){
for(int j=0;j<2;j++){
    printf("%d ",sum[i][j]);
}
printf("\n");
}
return 0;
}