#include<stdio.h>
#include<conio.h>
void main()
{
   float k,f,c;
   clrscr();
   printf("enter temperature in fahrenheit :");
   scanf("%f",&f);
   c=5.0/9*(f-32);
   k=c+273.15;
   printf("celsius=%f",c);
   printf("\nkelvin=%f",k);
   getch();


}