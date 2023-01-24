//accept a limit and print the composite fibonacci numbers till the limit
#include<stdio.h>
int main()
{
	int c,i,n,a=0,b=1;
	printf("ENTER THE LIMIT ");
	scanf("%d",&n);
	while(a<=n)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				printf("\n%d",a);
				break;
			}
		}
		c=a+b;
		a=b;
		b=c;
	}
}
