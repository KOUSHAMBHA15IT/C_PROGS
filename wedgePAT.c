//* * * * *
//* * * *
//* * *
//* *
//*
//* *
//* * *
//* * * *
//* * * * *
#include<stdio.h>
void main()
{
	int i,j,k; int n;
	printf("enter the limit of rows on symmetrical sides :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
