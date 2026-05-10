#include<stdio.h>

void show(int *x)
{
    *x = 20;
    printf("show=%d", *x);
}

void main()
{
    int a;
    a = 10;

    show(&a);

    printf(" value=%d", a);
}
