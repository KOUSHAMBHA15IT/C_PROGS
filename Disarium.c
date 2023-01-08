// check Disarium or not ,eg 135= 1^1 + 3^2 + 5^3
#include<math.h>
#include<stdio.h>
int nod(int);
int check(int);
void main()
{
	int n;
	printf("ENTER THE NUMBER ");
	scanf("%d",&n);
	if(check(n)==1)
	printf("DISARIUM NO.");
	else
	printf("NOT");
}
int nod(int a)
{
	int c=0,d;
	while(a>0)
	{
		d=a%10;
		c++;
		a=a/10;
	} return c;
}
int check(int a)
{
	int s=0,d,cpy=a;
	while(a>0)
	{
		d=a%10;
		s=s+ pow(d,nod(a));
		a=a/10;
	}
	if(cpy==s)
	return 1;
	else
	return 0;
}
