#include<stdio.h>
#include<conio.h>
void main()
{
  int n,d,l;
  clrscr();
  printf("enter number:");
  scanf("%d",&n);
  l=n%10;
  while(n>=10)
   n=n/10;
   d=n;
  printf("sum=%d",d+l);
  getch();
}