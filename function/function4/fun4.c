#include<stdio.h>
void main()
{
	int arr[5];
	int i,k=3,len,last,j;
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	
	len=sizeof(arr)/sizeof(arr[0]);
	
	printf("array:\n");
	for(i=0;i<len;i++)
	{
		
		printf("%d",arr[i]);
	}
	for(i=0;i<k;i++)
	{
		last=arr[len-1];

	}
	for(j=len-1;j>0;j--)
	{
		arr[j]=arr[j-1];
	}
	arr[0]=last;
	printf("\n");
	printf("arr after rotation=");
	for(i=0;i<len;i++)
	{
		printf("%d",arr[i]);
	}
}

