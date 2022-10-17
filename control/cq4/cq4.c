#include<stdio.h>
void main()
{
	int n,i,k=1;
	printf("ENTER A NUMBER FOR FACTORIAL=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=k*i;
	}
	printf("\nFactorail osf %d is =%d",n,k);
}
