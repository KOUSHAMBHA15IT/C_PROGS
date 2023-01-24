//accept Koushambha Das 
// print KADS@123  (first and last char of the words + @123)
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];int l,i,p=0;
	printf("ENTER THE NAME ");
	gets(a);
	strupr(a);
	l=strlen(a);
	printf("%c",a[0]);
	for(i=1;i<strlen(a);i++)
	{
		if(a[i]==' ')
		{
			printf("%c%c",a[i-1],a[i+1]);
		}
		
	}
	printf("%c@123",a[l-1]);
}
