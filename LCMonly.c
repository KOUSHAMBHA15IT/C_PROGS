//accept two numbers and print their lcm without hcf
// eg 8 & 12 has lcm =24
#include<stdio.h>
int main()
{
	int a,b,i,l;
	printf("ENTER THE NUMBERS");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a*b;i++)
	{
		if(i%a==0 && i%b==0)
		{
			l=i;
			break;
		}
	}
	printf("\n LCM value %d",l);

}
