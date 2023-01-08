// take a num and print all happy numbers till that ,happy is when sum of square of digits = num
#include<stdio.h>
void main()
{
	int n,c,d,s;
	printf("ENTER A NUMBER");
	scanf("%d",n);
	c=n;
	while(n>=10)
		{s=0;
			while(n!=0)
			{
			 d=n%10;
			 s=s+ d*d;
			 n=n/10;
		    } n=s;
		}
		if(s==1)
		printf("HAPPY NUMBER");
		else
		printf("not HAPPY number");
}
