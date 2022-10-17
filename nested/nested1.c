#include<stdio.h>
void main()
{
	int n,i,j;
	printf("enter rows=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		for(j=2;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
