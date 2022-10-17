#include<stdio.h>
void main()
{
	char arr[10],i;
	int n;
	printf("how many char you want=");
	fgets(arr,sizeof arr,stdin);
	while(arr[i]!='\0')
	{
		printf("%c",arr[i]);
		i++;
	}

}
