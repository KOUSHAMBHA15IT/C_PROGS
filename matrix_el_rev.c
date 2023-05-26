//reverse every element of matrix and print both the matrix
#include<stdio.h>
void input(int[][4]);
void display(int[][4]);
int reverse(int);
void main()
{
	int a[3][4],b[3][4];
	int i,j;
	printf("\n ENTER number in FIRST MATRIX \n");
	input(a);
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			b[i][j]=reverse(a[i][j]);
			
		}
	}
	printf("\n ORIGINAL MATRIX \n");
	display(a);
	printf("\n REVERSED MATRIX \n");
	display(b);
}
void input(int arr[][4])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("ENTER NUMBER ");
			scanf("%d",&arr[i][j]);
		}
	}
}
void display(int arr[][4])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
			
		}
		printf("\n");
	}
}
int reverse(int n)
{
	int r=0;
	int d;
	while(n!=0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	return r;
}
