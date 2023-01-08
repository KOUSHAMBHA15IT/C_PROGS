#include<stdio.h>
int sumoffact(int);
void main()
{
	int a,b;
	printf("ENTER THE TWO NUMBERS ");
	scanf("%d%d",&a,&b);
	if( sumoffact(a)==b && sumoffact(b)==a )
	printf("THE NUMBERS ARE AMICABLE");
	else
	printf("NOT");
}
int sumoffact(int x)
{
	int i,s=0;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		s=s+i;
	} return s;
}
