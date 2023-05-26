//    1
//   212
//  32123
// 4321234
//543212345
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i;k++)
		printf(" ");
		for(j=i;j>=1;j--)
		printf("%d",j);
		for(j=2;j<=i;j++)
		printf("%d",j);
		printf("\n");
	}
}
