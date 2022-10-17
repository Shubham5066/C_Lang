#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	printf("enter a string to covert in upper case of vice versa=");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	printf("After that =%s",a);
	return 0;
}
