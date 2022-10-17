#include<stdio.h>
void main()
{
	int i,j,arr[10];
	for(i=0;i<=10;i++)
	{
		printf("\nenter a number you want=");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=10;i++)
	{
		printf("\nnum=%d",arr[i]);
	}
	for(i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("\nTHIS NUMBER IS EVEN=%d",arr[i]);
		}
		else
		{
			printf("\nTHIS NUMBER IS ODD= %d",arr[i]);
		}
	}
}
