#include<stdio.h>
void main()
{
	int n,p,c,s;
	printf("enter number ");
	scanf("%d",&n);
	s=n*n;
	c=n;p=1;
	while(n!=0)
	{
		p=p*10;
		n=n/10;
	}
	if(s%p==c)
	printf("AUTOMORPHIC NUMBER");
	else
	printf("not");
}
