#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("enter value of a :");
 scanf("%d",&a);
 a++;
 printf("\npost increment=%d",a);
 a--;
 printf("\npost decrement=%d",a);
 ++a;
 printf("\npre increment=%d",a);
 --a;
 printf("\npre decrement=%d",a);
 getch();


}