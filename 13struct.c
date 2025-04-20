#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
float marks;
} st1,st2;
void main()
{
printf("enter Roll and marks of 1st student\n");
scanf("%d %f", &st1.roll,&st1.marks);
printf("enter roll and marks of 2nd student\n");
scanf("%d %f", &st2.roll, &st2.marks);
printf("Roll and marks of 1st student\n");
printf("%d %f\n", st1.roll, st1.marks);
printf("roll and marks of 2nd student\n");
printf("%d %f", st2.roll, st2.marks);
getch();
}
