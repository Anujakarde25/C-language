#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
   clrscr();
   printf("enter value of a & b:");
   scanf("%d%d",&a,&b);
   a=a^b;
   b=a^b;
   a=a^b;
   printf("value of a=%d",a);
   printf("\nvalue of b=%d",b);
   getch();




}