#include<stdio.h>
void main()
{
	int a,n,sum=0,i,t;
	printf("ENter the number=");
	scanf(" %d",&n);
	t=n;
	for(i=0;n!=0;i++)
	{
		a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
	}
	if(sum==t)
	{
		printf("/n %d is the armstrong number",sum);
	}
	else 
	{
		printf("\n %d is the not armstrong number",t);
	}
}
