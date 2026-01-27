#include<stdio.h>
#include<conio.h>
void main()
{
 int num,num1,d,rev=0;
 clrscr();
 printf("enter number:");
 scanf("%d",&num);
 num1=num;
 while(num>0)
 {
  d=num%10;
  rev=rev*10+d;
  num=num/10;
 }
 if(num1==rev)
 printf("number is palindrom");
 else
 printf("number is not palindrom");
 getch();
}