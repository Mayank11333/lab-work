#include<stdio.h>
void main()
{
 int a,b,c;
 printf("enter the two numbers");
 scanf("%d%d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("the new value of a= %d",a);
 printf("the new value of b= %d",b);
}
