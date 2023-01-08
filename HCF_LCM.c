#include<stdio.h>
void main()
{
	int a,b,i,m,h,l;
	printf("ENTER TWO NUMBERS ");
	scanf("%d%d",&a,&b);
	m=(a<b?a:b);
	for(i=m;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		{
			h=i;
			break;
		}
	}
	l=(a*b)/h;
	printf("\n HCF value %d",h);
	printf("\n LCM value %d",l);
}
