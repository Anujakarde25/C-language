#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("enter character :");
  scanf("%c",&ch);
  printf("previous charactre=%c",ch-1);
  printf("\nnext charactre=%c",ch+1);
  getch();


}