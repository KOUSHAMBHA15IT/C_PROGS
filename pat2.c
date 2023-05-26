//   1
//  101
// 10101
//1010101
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=7;i+=2)
	{
		for(k=1;k<=7-i;k+=2)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}
