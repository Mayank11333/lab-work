#include<stdio.h>
void main()
{
  int gs,ns,al,d;
  printf("enter the gross salary");
  scanf("%d",&gs);
  if(gs>10000)
  {
    al=(10*gs)/100;
    d=(3*gs)/100;
    ns=gs+al-d;
    printf("net salary %d",ns);
  }
  else if(gs>5000)
  {
    al=(7*gs)/100;
    d=(2*gs)/100;
    ns=gs+al-d;
    printf("net salary %d",ns);
  }
}
