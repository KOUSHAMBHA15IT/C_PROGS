//sorting in descing order using bubble sort
#include<stdio.h>
#define MAX 20
void display(int [], int);
void sort(int [], int);
int main()
{
	int a[MAX],n,i;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the number ");
		scanf("%d",&a[i]);
	}
	printf("\n Before sort ");
	display(a,n);
	sort(a,n);
	printf("\n After sort ");
	display(a,n);
	
	return 0;	
}
void display(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	 printf(" %d",a[i]);
}
void sort(int a[], int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)// no of pass
	{
		for(j=0;j<n-1-i;j++)//no of compare
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
