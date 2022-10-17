#include<stdio.h>
#include<string.h>
void toLower(char *str)
{
	int i,l;
	l=strlen(str);
	printf("\n%s",str);
	for(i=0;i<=l;i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]+=32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]-=32;
		}
	  printf("%c",str[i]);
		
	}
		
	
}
void main()
{
	char str[100];
	printf("enter a any string=");
	scanf("%s",str);
	printf("\n%s",str);
	toLower(str);
}
