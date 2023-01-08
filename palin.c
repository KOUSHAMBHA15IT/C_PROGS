#include<math.h>
#include<stdio.h>
void main()
{
	int i,sq;
	i=10;
	while(i<=99)
	{
		sq=sqrt(i);
		if(sq*sq==i)
		printf("\n %d",i);
		i=i+1;
	}
}