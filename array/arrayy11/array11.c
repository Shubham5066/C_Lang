#include<stdio.h>
#define max 100
int i;
void main()
{
	int arr[max],sum;
	int arr1[max],n,j;
	int farr[max],k;
	printf("enter how many numbers you want=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter a elemnt %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("\nenter second array=");
	for(i=0;i<n;i++)
	{
		printf("\nenter a element %d:",j);
		scanf("%d",&arr1[i]);
	}
	printf("\ntwo array=");
	
	for(i=0;i<3;i++)
	{
		farr[i]=arr[i];
	}
        for(i=3;i<6;i++)
	{
	  farr[i]=arr1[i];
		printf("\n%d",farr[i]);
	}
	/*for(i=0;i<6;i++)
	{
		printf("\n%d",farr[i]);
	}*/

}
