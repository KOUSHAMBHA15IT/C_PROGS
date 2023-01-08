//it is a number whose sum of fACTORIAL of digits is equal to the number
#include<stdio.h>
int fact(int);
void main()
{
	int n,d,s,c;
	printf("enter the number ");
	scanf("%d",&n);
	c=n;s=0;
	while(n!=0)
	{
	d=n%10;
	s=s+ fact(d);
	n=n/10;	
	}
	if(s==c)
	printf("KRISHNAMURTHY NO.");
	else
	printf("NOT A KRISHNAMURTHY NO.");
}
int fact(int a)
{
	int f=1,i;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	
	}
	return f;
	
}
