#include<stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("enter a digit=");
	scanf("%d",&e);
	if((0<e)&&(9>e))
	{
		printf("sum of digit=%d",e);
	}
	else if((9<e)&&(e<99))
	{
		a=e%10;
		e=e/10;
		b=e%10;
		
		printf("sum of digit is=%d",a+b);
	}
	else if((100<e)&&(999>e))
	{
		a=e%10;
		e=e/10;
		b=e%10;
		e=e/10;
		c=e%10;
		printf("sum of digits is=%d",a+b+c);
	}
	else if((1000<e)&&(9999>e))
	{
		a=e%10;
		e=e/10;
		b=e%10;
		e=e/10;
		c=e%10;
		e=e/10;
		d=e%10;
		printf("sum of digits is =%d",a+b+c+d);
	}
	

	
	
	

}
