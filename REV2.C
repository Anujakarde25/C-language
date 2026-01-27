#include<stdio.h>
#include<conio.h>
void main()
{
  int num,d,rev=0;
  clrscr();
  printf("enter number:");
  scanf("%d",&num);
  while(num>0)
  {
   d=num%10;
   rev=rev*10+d;
   num=num/10;
  }
  printf("reverse=%d",rev);
  getch();

}