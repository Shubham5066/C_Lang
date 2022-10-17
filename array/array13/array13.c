#include<stdio.h>
void main()
{
	int i,n,seen[10]={0},rem=0;
	printf("How many numbers you wnat to print=");
	scanf("%d",&n);
	while(n !=0)
	{
		rem=n%10;
		if(seen[rem]>=-1)
		{
			seen[rem]++;
		}
		n=n/10;

	}
	for(i=0;i<10;i++)
	{
		if(seen[i]>1)
		{
			printf("%d is repeated number and frequency=%d",i,seen[i]);
		}
	}
	
}
