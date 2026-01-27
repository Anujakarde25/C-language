#include<stdio.h>
#include<conio.h>
int main()
{
  float r,h,surface,volume;
  clrscr();
  printf("enter radious :");
  scanf("%f",&r);
  printf("enter height :");
  scanf("%f",&h);
  surface= 2*3.14*r*(r+h);
  volume=3.14*r*r*h;
  printf("surface area=%f",surface);
  printf("\nvolume=%f",volume);
  return 0;
  getch();

}