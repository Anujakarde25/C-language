#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("enter value of a :");
   scanf("%d",&a);
   printf("enter value of b :");
   scanf("%d",&b);
   c=a;
   a=b;
   b=c;
   printf("a=%d",a);
   printf("\nb=%d",b);
   getch();



}