#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int i=0,j=0,k=0,s;
	scanf("%s",str);
	printf("%s",str);
	while(str!='\0')
	{
	if(str>='a'&&str<='z')
	{
	
		i++;


	}
	else if(str>='A'&&str<='Z')
	{
		
		j++;
	}
	else
	{
	
		k++;
	}
	}
		printf("\nTotal number of small alphabets=%d",i);
		printf("\n Total number is =%d",j);
	
		printf("\nTotal number of capital alphabets=%d",k);
}
