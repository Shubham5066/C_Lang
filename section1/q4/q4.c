#include<stdio.h>
void main()
{
	int x,y,z,a;
	printf("how many values you entering=");
	scanf("%d",&a);
	if(a>=3)
	{
	printf("enter three values =");
	scanf("%d\t%d\t%d",&x,&y,&z);
	printf("\n%d\t%d\t%d",x,y,z);
		if(x>y)
		{
		   if(x>z)
			{
				printf("\n X is greater than both=%d",x);
			}
		   else
		   {
			   printf("\n Z is greater than both=%d",z);
		   }
		}
		else
		{
			if(y>z)
			{
				printf("\n Y is greter than both=%d",y);

			}
			else
			{
				printf("\n Z is greter than both=%d",z);
			}
		}


	}
	else 
	{
		printf("\nerror");
	}
}
