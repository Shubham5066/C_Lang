#include<stdio.h>
void fun(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	printf("\nafter the swap is =%d and %d",x,y);
}
void main()
{
	int a,b;
	printf("enter the numbers of A and B=");
	scanf("%d\t%d",&a,&b);
	printf("\nbefore the swap is =%dand%d",a,b);
	fun(a,b);
}
