#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter a number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%5==0)
		{
			continue;
		}
		else 
		{
			sum=sum+i;
		}

	}
	printf("\n%d",sum);
}
