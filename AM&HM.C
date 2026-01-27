#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    float am,hm;
    clrscr();
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    am=(a+b)/2;
    hm=a*b/(a+b);
    printf("arithmatic mean=%f",am);
    printf("harmonic mean=%f",hm);
    getch();



}