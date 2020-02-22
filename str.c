#include<stdio.h>
void main()
{
int m1,m2,m3,sum;
char name[30];
float avg;
printf("enter the student name");
scanf("%s",name);
printf("enter the marks obtained");
scanf("%d %d %d", &m1,&m2,&m3);
sum=m1+m2+m3;
avg=sum/3.0;
printf(" entr the total is"sum);
printf("%d \n"sum);
printf("enter the total is"avg);
printf("%f \n"avg); 
}
