#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  clrscr();
  printf("enter a character :");
  scanf("%c",&ch);
  if(ch>='0' && ch<='9')
  printf("digit");
  else if(ch>='a' && ch<='z')
  printf("lowercase alfabet");
  else if (ch>='A' && ch<='Z')
  printf("uppercase alfabet");
  else
  printf("special character");
  getch();


}
