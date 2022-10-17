#include<stdio.h>
int fun(int a);
int main()
{
	int a;
	printf("enter a number=");
	scanf("%d",&a);
	printf("factorial is=%d",fun(a));
	return 0;
}
int fun(int a)
{
	if(a>=1)
	{
		return a*fun(a-1);
	}
	else
	{
		return 1;
	}
}
