// input- Shyamal Kumar Das output- S.K.Das
#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];int l,i,p=0;
	printf("Enter the name ");
	gets(a);
	l=strlen(a);
	for(i=l-1;i>0;i--)
	{
		if(a[i]==' ')
		{
			p=i;//index of last space
			break;
		}
		
	}
	printf("%c.",a[0]);//1st character
	for(i=1;i<p;i++)
	{
		if(a[i]==' ')
		printf("%c.",a[i+1]);
	}
	for(i=p;i<l;i++)
	printf("%c",a[i+1]);
}
