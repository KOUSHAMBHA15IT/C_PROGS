//check armstrong or not eg 153 = 1^3 + 5^3 + 3^3, 1634= 1^4 + 6^4 + 3^4 + 4^4
#include<math.h>
#include<stdio.h>
int nod(int);
int  check(int);
void main()
{
	printf("ARMSTRONG numbers FROM 1 TO 10000\n");
	int i;
	for(i=1;i<=10000;i++)
	{
		if(check(i)==1)
		printf("%d\n",i);
	}
}
int nod(int a)//to find the number of digits
{
	int s=0;
	while(a!=0)
	{
		s++;
		a=a/10;
	}return s;//here s has the number of digits
}
int check(int a)
{
	int s=0,d,cpy=a,c;
	c= nod(a);//c has the number of digits for eg:for 153,c=3
	while(a!=0)
	{
		d=a%10;
		s=s+ pow(d,c);//each digit-wise power of number of digits then sum
		a=a/10;
	}
	if(cpy==s)//final checking
	return 1;
	else 
	return 0;
	
}
