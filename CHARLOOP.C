#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 char ch='A';
 clrscr();
 for(i=1; i<=3; i++)
 {
  for(j=3; j>=i; j--)
  {
  printf("\t%c",ch++);
  }
  printf("\n");
 }
 getch();

}