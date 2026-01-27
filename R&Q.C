#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  float Q,R;
  clrscr();
  printf("enter value of a & b :");
  scanf("%d%d",&a,&b);
  Q=a%b;
  printf("quotient=%f",Q);
  R=a/b;
  printf("\nremainder=%f",R);
  getch();

}