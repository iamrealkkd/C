#include<stdio.h>
#include<conio.h>

struct student 
{
int roll;
float marks;
}st[50];

void main() 
{
int i;

for(i=0;i<2;i++)
{
printf("enter roll and marks of 1st student" " ");
scanf("%d %f", &st[i].roll , &st[i].marks);
}
for(i=0;i<4;i++)
{
printf("roll and marks of 1st student" " \n");
printf("%d %f", st[i].roll, st[i].marks);
}

getch();
}