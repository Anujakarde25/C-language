#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,sum=0,i;
 clrscr();
 printf("enter range:");
 scanf("%d%d",&a,&b);
 for(i=a; i<=b; i++)
 {
  sum=sum+i;
 }
  printf("sum=%d",sum);
  getch();
  return 0;
}