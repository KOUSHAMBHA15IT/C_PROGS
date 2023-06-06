#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void input(int [], int);
void print(int [], int);
void sort(int [], int);
int main() {
	int a[MAX],n;
	printf("Enter the number of elements ");
	scanf("%d",&n);
	input(a,n);//function call
	print(a,n)	;
	sort(a,n);
	print(a,n);
}
void sort(int a[], int n)
{
	int i,j,num;
	for(i=1;i<n;i++)
	{
		num=a[i];
		j=i-1;
		while(j>=0 && num<a[j])
		{
			a[j+1]	=a[j];
			j--;
		}
		a[j+1]=num;
		
	}
}
	
	void input(int a[], int size) {
		int i;
		for(i=0; i<size; i++) {
			printf("Enter Number ");
			scanf("%d",&a[i]);
		}
	}
	void print(int a[], int size) {
		int i;
		printf("\n Array Elements ");
		for(i=0; i<size; i++) {
			printf(" %d",a[i]);
		}
	}
