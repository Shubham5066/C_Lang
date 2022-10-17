#include<stdio.h>
int fun(int n)
{
     int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
void main()
{
	int n,r,ncr;
	printf("enter value of n=");
	scanf("%d",&n);
	printf("\nenter value of a=");
	scanf("%d",&r);
	ncr=fun(n)/(fun(r)*fun(n-r));
	printf("\nfinal=%d",ncr);
}
