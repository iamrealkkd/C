#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[4][3]={{1,2,3},{2,3,4},{4,5,6},{6,7,8}};
    int rows,cols;
    rows=4;
    cols=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
    printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    getch();
}