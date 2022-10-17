#include<stdio.h>
int index(int s[],int,int);
int main()
{
	int i;
	int s[40];
	int sz;
	int t;
	printf("\n enter the size of array:");
	scanf("%d",&sz);
	printf("\n enter the elements of array");
	for(i=0;i<sz;i++)
	{
		scanf("%d",&s[i]);
	}
	printf("\nenter the number whose right most=");
	scanf("%d",&t);
	index(s,sz,t);
	return 0;
}
int index(int s[],int size,int t)
{
	int i;
	int j=1;
	for(i=size-1;i>=0;i--)
	{
		if(s[i]==t)
		{
		printf("\n %d's rightmost occurance is=%d",t,j);
		break;
		}
		j++;
	}
}
