#include<stdio.h>
void main()
{
int a,b,temp;
a=5;
b=3;
temp=0;
printf("values before swap:%d,%d",a,b);
temp=a;
a=b;
b=temp;
printf("values after swap:%d,%d",a,b);
}

