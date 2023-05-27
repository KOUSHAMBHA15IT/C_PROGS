//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
#include<stdio.h>
void printPascal(int n)
{
int arr[n][n];
for (int i = 0; i < n; i++)
{
	for(int k=1;k<=n-i;k++)
	printf(" ");
	for (int j=0; j<=i; j++)
	{
	if (i==j||j==0)
		arr[i][j] = 1;
		
	else
		arr[i][j]=(arr[i-1][j-1] + arr[i-1][j]);
	printf("%d ",arr[i][j]);
	}
	printf("\n");
}
}
// Driver code
int main()
{
int n = 5;
printPascal(n);
return 0;
}
