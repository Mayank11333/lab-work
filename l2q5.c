#include<stdio.h>
void main()
{
  int gs,d,ns;
  printf("enter the gross sales");
  scanf("%d",&gs);
  if(gs>20000)
  {
    d=(15*gs)/100;
    ns=gs-d;
    printf("net sales %d",ns);
  }
  else if(gs>10000)
  {
    d=(10*gs)/100;
    ns=gs-d;
    printf("net sales %d",ns);
  }
  else
  {
    d=(5*gs)/100;
    ns=gs-d;
    printf("net sales %d",ns);
  }
}
