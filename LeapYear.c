#include<stdio.h>
void main()
{
	int y;
	printf("Enter the year : ");
	scanf("%d",&y);
	if(y%4==0 && y%100!=0)
	printf("\n IT IS LEAP YEAR");
	else if(y%400==0)
	printf("\n IT IS LEAP YEAR");
	else
	printf("\n IT IS not a  LEAP YEAR");
	
}
