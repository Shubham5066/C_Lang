#include<stdio.h>
void main()
{
	int i,j,arr[10]={55,5,3,22,5,99,6,5,65,88};
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(j=i-1;j>=0;j--)
	{
		printf("%d\t",arr[j]);
	}
}
