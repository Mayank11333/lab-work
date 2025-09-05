#include<stdio.h>
void main()
{
  int av,tm,a,b,c;
  printf("enter the  marks of three subjects");
  scanf("%d%d%d",&a,&b,&c);
  tm=a+b+c;
  av=tm/3;
  if(av>=70)
  {
    printf("distinction");
  }
  else if(av>=60)
  {
    printf("first and total marks = %d",tm);
  }
  else if(av>=50)
  {
    printf("second and total marks = %d",tm);
  }
  else if(av>=35)
  {
    printf("third and total marks = %d",tm);
  }
  else if(av<35)
  {
    printf("fail and total marks = %d",tm);
  }
}
