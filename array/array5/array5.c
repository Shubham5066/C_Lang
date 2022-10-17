#include<stdio.h>
void main()
{

	int i,n=0,arr[5],avg;
	for(i=0;i<5;i++)
	{
		printf("enter a numbers=");
		scanf("%d",&arr[i]);

	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	 n=n+arr[i];	
	}
	printf("\n%d",n);
	avg=n/5;
	printf("\n%d",avg);
	
	
}
