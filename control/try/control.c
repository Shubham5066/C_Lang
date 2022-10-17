#include<stdio.h>
void main()
{
	int a,b,s=0,i;
	scanf("%d\t%d",&a,&b);
	printf("%d\t%d",a,b);
	for(i=0;i<=10;i++)
	{
	s=a+b;
	a=b;
	b=s;
	printf("\t%d\t",s);
	}
}
