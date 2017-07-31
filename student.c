#include<stdio.h>
void main()
{
int id;
char a[5];
int m,e,t,s,so;
printf("enter the id:");
scanf("%d",&id);
printf("enter the name:");
scanf("%s",a);
printf("enter the marks:\n");
printf("math:");
scanf("%d",&m);
printf("\neng:");
scanf("%d",&e);
printf("\ntam:");
scanf("%d",&t);
printf("\nsci:");
scanf("%d",&s);
printf("\nsoc:");
scanf("%d",&so);
int total=(m+e+t+s+so);
float avg=total/5;
printf("\nTotal:%d",total);
printf("\nAverage:%f",avg);
}





