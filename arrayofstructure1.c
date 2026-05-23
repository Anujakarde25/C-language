#include<stdio.h>
struct emp
{
	int eno;
	char sname[15],des[15],dept[20];
	float sal;
};
struct emp e1[50];
void main()
{
	int n,num,i,flag=0,index;
	printf("enter limit:");
	scanf("%d",&n);

	for(i=0; i<n; i++)
	{
		printf("enter eno:");
		scanf("%d",&e1[i].eno);
		printf("enter ename:");
		scanf("%s",&e1[i].sname);
		printf("enter design:");
		scanf("%s",&e1[i].des);
		printf("enter salary:");
		scanf("%f",&e1[i].sal);
		printf("enter department:");
		scanf("%s",&e1[i].dept);
	}
	printf("enter emp no to search:");
	scanf("%d",&num);
	
	for(i=0; i<n; i++)
	{
		if(num==e1[i].eno)
		{
			flag=1;
			//index=i;
		}
	}
	if(flag==1)
	{
		printf("\neno=%d",e1[i].eno);
		printf("\nename=%s",e1[i].sname);
		printf("\ndesignation=%s",e1[i].des);
		printf("\nsalary=%.2f",e1[i].sal);
		printf("\ndepartment=%s",e1[i].dept);
	}
	else
	printf("not found the eno");
}
